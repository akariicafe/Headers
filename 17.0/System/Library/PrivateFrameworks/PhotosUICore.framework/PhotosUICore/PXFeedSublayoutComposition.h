@class PXLayoutGenerator;
@protocol PXFeedViewLayoutSpec;

@interface PXFeedSublayoutComposition : PXGGeneratedSublayoutComposition {
    PXLayoutGenerator *_cachedLayoutGenerator;
}

@property (retain, nonatomic) id<PXFeedViewLayoutSpec> spec;
@property (readonly, nonatomic) long long scrollableAxis;

- (id)configuredLayoutGenerator;
- (void)visibleRectDidChange;
- (void).cxx_destruct;

@end
