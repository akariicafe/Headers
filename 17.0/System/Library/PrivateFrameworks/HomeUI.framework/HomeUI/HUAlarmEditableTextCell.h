@class NSString, UITextField;

@interface HUAlarmEditableTextCell : UITableViewCell <UITextFieldDelegate>

@property (readonly, nonatomic) UITextField *textField;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)layoutSubviews;

@end
