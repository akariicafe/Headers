@class MFComposeDisplayMetrics;

@interface MFMailComposeHeaderView : CNComposeHeaderView

@property (retain, nonatomic) MFComposeDisplayMetrics *displayMetrics;

- (void)layoutMarginsDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)displayMetricsDidChange;

@end
