@class NSString, UITextField;

@interface HUEditableTextCell : UITableViewCell <HUEditableTextCellProtocol, HUDisableableCellProtocol>

@property (readonly, nonatomic) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;

@end
