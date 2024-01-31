@interface WKSyntheticFlagsChangedWebEvent : WebEvent

- (id)initWithCapsLockState:(BOOL)a0;
- (id)initWithKeyCode:(unsigned short)a0 modifiers:(unsigned int)a1 keyDown:(BOOL)a2;
- (id)initWithShiftState:(BOOL)a0;

@end
