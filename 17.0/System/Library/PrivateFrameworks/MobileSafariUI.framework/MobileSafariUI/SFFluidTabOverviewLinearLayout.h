@class NSIndexPath, NSMutableDictionary;

@interface SFFluidTabOverviewLinearLayout : SFFluidTabOverviewGridLayout {
    NSMutableDictionary *_cachedAttributes;
}

@property (retain, nonatomic) NSIndexPath *zoomedItemIndexPath;

+ (Class)layoutAttributesClass;

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldAllowScrollGesture;

@end
