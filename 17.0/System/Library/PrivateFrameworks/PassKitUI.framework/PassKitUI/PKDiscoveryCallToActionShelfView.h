@class NSString, PKContinuousButton, UIImageView, PKDiscoveryCallToAction, PKDiscoveryMedia, PKDiscoveryCallToActionShelf, PKLinkedApplication, UILabel;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCallToActionShelfView : PKDiscoveryShelfView <PKLinkedApplicationObserver> {
    PKDiscoveryCallToActionShelf *_ctaShelf;
    PKDiscoveryCallToAction *_callToAction;
    PKDiscoveryMedia *_media;
    PKLinkedApplication *_linkedApplication;
    UILabel *_titleLabel;
    UILabel *_editorialDescriptionLabel;
    UIImageView *_iconImageView;
    PKContinuousButton *_button;
    struct CGSize { double width; double height; } _iconSize;
}

@property (weak, nonatomic) id<PKDiscoveryCardViewDelegate> delegate;
@property (nonatomic) BOOL showActivityIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setImage:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_buttonPressed:(id)a0;
- (struct CGSize { double x0; double x1; })_iconSize;
- (double)_leadingEditorialTextSpace;
- (double)_leadingTitleSpace;
- (struct CGSize { double x0; double x1; })_sizeForMedia;
- (id)initWithShelf:(id)a0;
- (void)linkedApplicationDidChangeState:(id)a0;

@end
