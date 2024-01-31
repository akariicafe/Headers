@interface _UIKeyboardBasedNonEditableTextSelectionInteraction : _UIKeyboardBasedTextSelectionInteraction {
    BOOL _isShiftKeyBeingHeld;
}

- (void)oneFingerForcePan:(id)a0;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint { double x0; double x1; })a0 viaDrag:(BOOL)a1;
- (void)_synchronousGranularityExpandingGestureWithTimeInterval:(double)a0 timeGranularity:(double)a1 isMidPan:(BOOL)a2;
- (void)oneFingerForcePress:(id)a0;

@end
