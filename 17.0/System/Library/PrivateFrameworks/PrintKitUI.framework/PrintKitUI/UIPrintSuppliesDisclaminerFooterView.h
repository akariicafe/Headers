@class UILabel, NSURL;

@interface UIPrintSuppliesDisclaminerFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *disclaimerLabel;
@property (retain, nonatomic) NSURL *suppliesInfoURL;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } suppliesInfoLinkRange;

- (void)prepareForReuse;
- (void)handleTapOnLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (id)messageText;
- (void)updateDisclaimerTextWithInfoURL:(id)a0 tintColor:(id)a1;

@end
