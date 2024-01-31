@interface TTRITableViewCellWithConditionalAccessibilityActions : UITableViewCell

- (id)_privateAccessibilityCustomActions;
- (BOOL)ttriAccessibilityHidesPrivateActions;
- (BOOL)ttriAccessibilityIsTableViewEditing;

@end
