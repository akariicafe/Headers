@class NSString, UILabel;

@interface WFCompactTextThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) NSString *string;
@property (weak, nonatomic) UILabel *label;

- (void)traitCollectionDidChange:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (unsigned long long)preferredContentMode;
- (double)contentHeightForWidth:(double)a0;

@end
