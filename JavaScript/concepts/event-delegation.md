**Event Delegation in JavaScript**
=====================================

**Introduction**
---------------

In this tutorial, we will learn how to use event delegation in JavaScript
to handle multiple event handlers for a single element.

**Problem**
------------

Imagine having a large number of event handlers on a page, such as click
events on each menu item. This can lead to performance issues due to the
following reasons:

*   Each event handler is a function that takes up memory.
*   Assigning multiple event handlers can cause delays in interactivity.

**Solution**
------------

Instead of having multiple event handlers, we can assign a single event
handler to handle all click events on a parent element using event
delegation.

**Example Code**
-----------------

```javascript
let menu = document.querySelector('#menu');

menu.addEventListener('click', (event) => {
  let target = event.target;

  switch(target.id) {
    case 'home':
      console.log('Home menu item was clicked');
      break;
    case 'dashboard':
      console.log('Dashboard menu item was clicked');
      break;
    case 'report':
      console.log('Report menu item was clicked');
      break;
  }
});
```

**How it Works**
-----------------

When an `<a>` element inside the `<ul>` element with the id `menu` is
clicked, the click event bubbles up to its parent element, which is the
`<ul>` element. The event delegation allows us to capture this event at a
higher level in the DOM than the individual `<a>` elements.

We can then access the target property of the event object to get the
element that dispatched the event, and use its `id` property to determine
which menu item was clicked.

**Benefits**
------------

Event delegation provides several benefits:

*   **Less memory usage**: We only need a single event handler, reducing
memory usage.
*   **Better performance**: The document object is available immediately,
and we don't need to wait for the DOMContentLoaded or load events.
*   **Easier maintenance**: We have fewer event handlers to manage.