@interface PXStoryMemoryFeedPlaceholderFactory : NSObject <PXFeedPlaceholderFactory>

@property (readonly, nonatomic) BOOL supportsDynamicPlaceholderContentSize;

- (id)createPlaceholderViewForFeedWithViewModel:(id)a0;

@end
