@interface DOMOverflowEvent : DOMEvent

@property (readonly) unsigned short orient;
@property (readonly) BOOL horizontalOverflow;
@property (readonly) BOOL verticalOverflow;

- (void)initOverflowEvent:(unsigned short)a0 horizontalOverflow:(BOOL)a1 verticalOverflow:(BOOL)a2;

@end
