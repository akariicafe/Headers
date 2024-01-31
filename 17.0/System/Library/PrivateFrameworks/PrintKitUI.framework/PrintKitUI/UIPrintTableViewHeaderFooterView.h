@class UILabel, NSString, UIActivityIndicatorView;

@interface UIPrintTableViewHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NSString *messageText;
@property (nonatomic) BOOL spinSpinner;
@property (nonatomic) BOOL spinnerHidden;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
