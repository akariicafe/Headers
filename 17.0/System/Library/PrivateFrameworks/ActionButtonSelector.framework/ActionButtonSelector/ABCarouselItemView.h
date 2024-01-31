@class UIImageView, ABCarouselItem;
@protocol UITraitChangeRegistration;

@interface ABCarouselItemView : UIView {
    UIImageView *_imageView;
    id<UITraitChangeRegistration> _traitRegistration;
}

@property (retain, nonatomic) ABCarouselItem *item;

- (void)_setupImageView;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithItem:(id)a0;
- (void)_updateForLayoutDirection;

@end
