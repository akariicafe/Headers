@class PUHeadroomGradientView, PFParallaxImageLayer, PUParallaxLayerLayoutInfo, CALayer, UIView;

@interface PUParallaxImageLayerView : PUParallaxLayerView {
    PUParallaxLayerLayoutInfo *_currentLayoutInfo;
}

@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backfillView;
@property (retain, nonatomic) UIView *backfillMaskView;
@property (retain, nonatomic) PUHeadroomGradientView *headroomGradientView;
@property (readonly, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) PFParallaxImageLayer *parallaxImageLayer;
@property (retain, nonatomic) PFParallaxImageLayer *backfillParallaxImageLayer;
@property (nonatomic) BOOL backfillMaskingEnabled;

- (void).cxx_destruct;
- (void)layoutWithInfo:(id)a0;
- (void)_layoutWithCurrentLayoutInfo;
- (void)_updateParallaxBackfillLayerProperties;
- (void)_updateParallaxBackfillMaskingProperties;
- (void)_updateParallaxHeadroomLayerProperties;
- (void)_updateParallaxImageLayerProperties;
- (id)currentLayoutInfo;
- (id)initWithParallaxImageLayer:(id)a0 isEditing:(BOOL)a1;
- (id)parallaxLayer;
- (void)setCurrentLayoutInfo:(id)a0;

@end
