@class LPLinkView;

@interface _UIActivityContentTitleView : _UINavigationBarTitleView

@property (retain, nonatomic) LPLinkView *linkView;
@property (nonatomic) BOOL photosCarouselMode;
@property (nonatomic) BOOL customButtonMode;
@property (nonatomic) BOOL isCloseButtonOnLeadingEdge;
@property (nonatomic) BOOL hasCloseButton;

- (void)_updateContent;
- (void).cxx_destruct;
- (void)contentDidChange;
- (void)layoutSubviews;
- (long long)preferredContentSizeForSize:(long long)a0;

@end
