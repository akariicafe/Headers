@class UIButton, UIView, MUAmenityListSectionConfiguration;

@interface MUAmenityListSectionView : MUPlaceVerticalCardContainerView {
    MUAmenityListSectionConfiguration *_configuration;
    UIButton *_moreButton;
    UIView *_applePayAmenityRowView;
    UIView *_applePayImageView;
}

@property (nonatomic, getter=isExpanded) BOOL expanded;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_performExpansion;
- (id)initWithAmenityListConfiguration:(id)a0;

@end
