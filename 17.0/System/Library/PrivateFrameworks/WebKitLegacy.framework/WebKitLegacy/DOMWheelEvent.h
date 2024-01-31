@interface DOMWheelEvent : DOMMouseEvent

@property (readonly) int wheelDeltaX;
@property (readonly) int wheelDeltaY;
@property (readonly) int wheelDelta;
@property (readonly) BOOL isHorizontal;

- (double)deltaX;
- (double)deltaY;
- (unsigned int)deltaMode;
- (double)deltaZ;
- (void)initWheelEvent:(int)a0 wheelDeltaY:(int)a1 view:(id)a2 screenX:(int)a3 screenY:(int)a4 clientX:(int)a5 clientY:(int)a6 ctrlKey:(BOOL)a7 altKey:(BOOL)a8 shiftKey:(BOOL)a9 metaKey:(BOOL)a10;
- (BOOL)webkitDirectionInvertedFromDevice;

@end
