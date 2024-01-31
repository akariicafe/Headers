@class UIVisualEffectView, CPSScaledImageView;

@interface CPSContentRatingContainerView : UIView {
    CPSScaledImageView *_contentRatingImageView;
    UIVisualEffectView *_visualEffectView;
}

- (id)init;
- (void).cxx_destruct;
- (void)setImage:(id)a0 usesVibrantAppearance:(BOOL)a1;

@end
