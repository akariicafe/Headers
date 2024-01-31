@class NSString, UIImageView, _TtC11PosterBoard13PBFCircleView;

@interface PBFFocusCheckboxView : UIView {
    _TtC11PosterBoard13PBFCircleView *_circleView;
    UIImageView *_imageView;
}

@property (nonatomic, getter=isOn) BOOL on;
@property (copy, nonatomic) NSString *associatedPosterIdentifier;

- (void)_updateColors;
- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_updateAccessibilityAttributes;

@end
