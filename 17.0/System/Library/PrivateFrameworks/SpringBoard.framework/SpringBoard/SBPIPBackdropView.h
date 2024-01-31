@class NSString, NSArray, CAFilter;

@interface SBPIPBackdropView : UIView {
    CAFilter *_gaussianBlurFilter;
    CAFilter *_averageColorFilter;
    NSArray *_animatedLayerProperties;
}

@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) double gaussianBlurRadius;
@property (nonatomic) double backdropScale;

+ (Class)layerClass;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateFilters;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;

@end
