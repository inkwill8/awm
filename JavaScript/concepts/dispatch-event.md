**Event Dispatching in JavaScript**
=====================================

**Summary**

In this tutorial, we'll learn how to programmatically create and dispatch
events using the `Event` constructor and the `dispatchEvent()` method.

### Creating an Event

To generate an event programmatically, follow these steps:

1.  Create a new `Event` object using the `Event` constructor.
2.  Trigger the event on an element using the `element.dispatchEvent()`
method.

**Event Constructor**
---------------------

The `Event` constructor accepts two parameters:

*   `type`: A string that specifies the event type (e.g., "click").
*   `options`: An object with two optional properties:
    *   `bubbles`: A boolean value that determines if the event bubbles or
not. If true, the event is bubbled; otherwise, it's not.
    *   `cancelable`: A boolean value that specifies whether the event is
cancelable when true.

By default, the options object has the following values:

*   `bubbles: false`
*   `cancelable: false`

**Example**
------------

```javascript
let clickEvent = new Event('click');
```

### Dispatching an Event

To fire an event on an element, use the `element.dispatchEvent()` method.

**Example**
-------------

```html
<button class="btn">Test</button>

<script>
    let btn = document.querySelector('.btn');

    btn.addEventListener('click', function () {
        alert('Mouse Clicked');
    });

    let clickEvent = new Event('click');
    btn.dispatchEvent(clickEvent);
</script>
```

### Understanding Event Authenticity

The `event.isTrusted` property indicates whether the event was generated
by user actions (true) or code (false). You can examine this value to
check the authenticity of the event.

**Best Practice**

Use specialized event constructors like `MouseEvent` instead of the
generic `Event` type, as they provide more information specific to the
events. For example:

```javascript
let clickEvent = new MouseEvent("click", {
    bubbles: true,
    cancelable: true,
    clientX: 150,
    clientY: 150
});
```

This constructor provides additional properties like `clientX` and
`clientY`, which specify the horizontal and vertical coordinates at which
the event occurred relative to the viewport.

**Full List of MouseEvent Properties**

Visit the [official Mozilla
documentation](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent) for the full list of properties available in the `MouseEvent`.
