@interface WKOptionPickerCell : UIPickerContentView

@property (nonatomic) BOOL disabled;

- (id)init;
- (BOOL)_isSelectable;
- (id)initWithOptionItem:(const void *)a0;

@end
