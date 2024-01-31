@class WFContentItem, UIView;

@interface WFCompactPreviewThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) WFContentItem *contentItem;
@property (weak, nonatomic) UIView *hostedView;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithContentItem:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (unsigned long long)preferredContentMode;
- (double)contentHeightForWidth:(double)a0;

@end
