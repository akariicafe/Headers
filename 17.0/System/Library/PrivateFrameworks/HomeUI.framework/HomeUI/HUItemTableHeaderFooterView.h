@class UITextView, NSArray, NSString, NSLayoutConstraint, NSAttributedString;

@interface HUItemTableHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UITextView *messageTextView;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSLayoutConstraint *bottomSpacingConstraint;
@property (copy, nonatomic) NSAttributedString *attributedMessage;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) BOOL includeBottomSpacing;

+ (BOOL)requiresConstraintBasedLayout;

- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (double)_bottomSpacing;

@end
