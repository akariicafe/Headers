@class PXExtendedTraitCollection, PXStoryChromeButtonSpec;

@interface PXStoryPlayButtonSpec : NSObject

@property (readonly, nonatomic) PXStoryChromeButtonSpec *chromeButtonSpec;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) double playButtonProgressIndicatorLineWidth;

- (void).cxx_destruct;
- (id)initWithChromeButtonSpec:(id)a0;

@end
