@class NSString, UITextField;

@interface TSWPTextFieldTableViewCell : UITableViewCell <UITextFieldDelegate>

@property (readonly, retain, nonatomic) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)p_endEditingOnExit;

@end
