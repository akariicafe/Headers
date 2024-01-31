@interface PUScrubberTilingLayoutInvalidationContext : PUTilingLayoutInvalidationContext

@property (readonly, nonatomic) BOOL invalidatedExpandedItem;

- (void)invalidateExpandedItem;

@end
