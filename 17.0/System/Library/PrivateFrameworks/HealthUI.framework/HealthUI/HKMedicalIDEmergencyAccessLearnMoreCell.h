@class NSAttributedString, UITextView;

@interface HKMedicalIDEmergencyAccessLearnMoreCell : UITableViewCell {
    UITextView *_bodyTextView;
}

@property (copy, nonatomic) NSAttributedString *body;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setUpConstraints;
- (void)_addSubviews;
- (void)_setUpViews;

@end
