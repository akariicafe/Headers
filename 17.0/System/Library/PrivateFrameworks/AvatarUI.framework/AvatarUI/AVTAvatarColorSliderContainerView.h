@class NSArray, AVTAvatarAttributeEditorSectionColorItem, AVTColorSlider;
@protocol AVTAvatarColorSliderContainerViewDelegate;

@interface AVTAvatarColorSliderContainerView : UIView <AVTColorSliderDelegate>

@property (retain, nonatomic) AVTColorSlider *slider;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) AVTAvatarAttributeEditorSectionColorItem *sectionItem;
@property (weak, nonatomic) id<AVTAvatarColorSliderContainerViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateSliderTrackLayerAnimated:(BOOL)a0;
- (void)colorSlider:(id)a0 didFinishSelectingValue:(double)a1;
- (void)colorSlider:(id)a0 valueChanged:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 userInterfaceLayoutDirection:(long long)a1;
- (void)setSectionItem:(id)a0 animated:(BOOL)a1;
- (void)updateSliderWithColorPreset:(id)a0 animated:(BOOL)a1;

@end
