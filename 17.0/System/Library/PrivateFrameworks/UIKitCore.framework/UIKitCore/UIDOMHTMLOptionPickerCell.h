@interface UIDOMHTMLOptionPickerCell : UIPickerContentView

@property (nonatomic) BOOL disabled;

- (id)initCommon;
- (BOOL)_isSelectable;
- (id)initWithHTMLOptionNode:(id)a0;

@end
