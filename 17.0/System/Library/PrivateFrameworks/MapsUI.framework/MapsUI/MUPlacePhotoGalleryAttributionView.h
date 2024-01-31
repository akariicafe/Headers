@class UIMenu, UIView, NSString, MULinkView, UIButton, NSLayoutConstraint, UIVisualEffectView, UILabel, MUPlacePhotoGalleryAttributionViewModel;
@protocol MUPlacePhotoGalleryAttributionViewDelegate;

@interface MUPlacePhotoGalleryAttributionView : UIView <UITextViewDelegate, MUActivityObserving>

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) MULinkView *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UIButton *accessoryButton;
@property (retain, nonatomic) UIMenu *menu;
@property (retain, nonatomic) UILabel *captionLabel;
@property (retain, nonatomic) NSLayoutConstraint *captionToPrimaryLabelConstraint;
@property (readonly, nonatomic) UIView *accessoryView;
@property (weak, nonatomic) id<MUPlacePhotoGalleryAttributionViewDelegate> delegate;
@property (retain, nonatomic) MUPlacePhotoGalleryAttributionViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)setupSubviews;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (void)_accessoryViewTapped;
- (void)_attributionTapped;
- (void)_buildAndUpdateDescription;

@end
