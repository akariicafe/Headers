@class UIColor;
@protocol SFEditableTableViewCellDelegate;

@interface SFEditableTableViewCell : UITableViewCell

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (weak, nonatomic) id<SFEditableTableViewCellDelegate> delegate;
@property (retain, nonatomic) UIColor *overrideEditableTextFieldTextColor;

- (void)tintColorDidChange;
- (void)copy:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)_updateTextFieldTextColor;
- (id)initWithEnabledState:(BOOL)a0;

@end
