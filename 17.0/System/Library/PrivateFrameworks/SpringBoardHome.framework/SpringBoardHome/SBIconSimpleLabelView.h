@class SBIconView, UIImage, SBIconLabelImageParameters;

@interface SBIconSimpleLabelView : UIImageView <SBIconLabelView>

@property (weak, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) SBIconLabelImageParameters *imageParameters;

- (void)updateIconLabelWithSettings:(id)a0 imageParameters:(id)a1;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;

@end
