#pragma once

namespace KeyboardManagerInput
{
    class InputInterface;
}

namespace KeyboardEventHandlers
{
    // Function to ensure Num Lock state does not change when it is suppressed by the low level hook
    void SetNumLockToPreviousState(KeyboardManagerInput::InputInterface& ii);

    // Function to ensure Caps Lock state does not change when it is suppressed by the low level hook
    void SetCapsLockToPreviousState(KeyboardManagerInput::InputInterface& ii);
};
