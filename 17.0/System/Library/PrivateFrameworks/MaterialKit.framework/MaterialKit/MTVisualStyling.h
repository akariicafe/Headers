@class UIColor, NSString, CAFilter, MTCoreMaterialVisualStyling;

@interface MTVisualStyling : NSObject

@property (readonly, copy, nonatomic) UIColor *color;
@property (readonly, nonatomic) double alpha;
@property (readonly, nonatomic) CAFilter *composedFilter;
@property (readonly, copy, nonatomic) NSString *visualStyleSetName;
@property (readonly, copy, nonatomic) NSString *visualStyleName;
@property (readonly, nonatomic, getter=_coreMaterialVisualStyling) MTCoreMaterialVisualStyling *coreMaterialVisualStyling;

- (void)applyToView:(id)a0 withColorBlock:(id /* block */)a1;
- (id)visualEffect;
- (id)_layerConfig;
- (id)initWithCoreMaterialVisualStyling:(id)a0;
- (void).cxx_destruct;

@end
