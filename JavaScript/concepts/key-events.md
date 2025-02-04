# Summary of "JavaScript Keyboard Events" Article

### Key Concepts Covered:
- **Keyboard Event Types**: Three primary events related to keyboard usage
are covered - `keydown`, `keyup`, and `keypress`. Each serves different
purposes, firing at specific moments during a user's interaction with the
keyboard.

- **Sequence of Events for Character Keys**: When you press any character
key on your keyboard:
  - The sequence is as follows: `keydown` -> `keypress` -> `keyup`. These
events occur before any changes are made to the text field, capturing
input directly from the user without waiting for a change.

- **Events for Non-Character Keys**: For non-character keys such as arrow
or function keys:
  - The sequence is different: First comes `keydown`, then follows an
event repeatedly until you release the key (`keyup`). If it's a character
key held down, only the initial `keydown` will occur.

- **Handling Keyboard Events**: How to handle these events in JavaScript
involves selecting the element on which they should fire (typically input
fields), and using `.addEventListener()` for event registration. Here’s an
example:
  ```javascript
  let msg = document.getElementById('message');

  msg.addEventListener("keydown", function(event) {
    // handle keydown
  });

  msg.addEventListener("keypress", function(event) {
    // handle keypress
  });

  msg.addEventListener("keyup", function(event) {
    // handle keyup
  });
  ```
- **Keyboard Event Properties**: Two critical properties within the event
object are `key` and `code`. These allow you to identify precisely which
key was pressed:
  - The `key` property retrieves the actual character entered.
  - The `code` property returns a specific code that correlates with each
keyboard type, such as KeyZ for letters or ArrowUp for arrow keys.

- **Practical Example**: A demonstration of capturing these events in
action can be seen by typing 'z' into an input field:
  - Each character key will trigger all three events (keydown -> keypress
->keyup).
  - Non-character keys like function or arrow keys only fire `keydown` and
subsequent `keyup`, indicating their specific roles.

### Conclusion:
This tutorial provides a comprehensive guide on how to manage JavaScript
keyboard events, focusing specifically on the differences between
character and non-character keys. Understanding these nuances is crucial
for creating interactive applications that respond dynamically to user
input across various devices.