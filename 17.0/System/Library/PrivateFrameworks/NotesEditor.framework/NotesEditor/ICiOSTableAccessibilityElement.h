@class ICiOSTableAttachmentView, ICTableAccessibilityController, NSString;

@interface ICiOSTableAccessibilityElement : UIAccessibilityElement <UIAccessibilityContainerDataTable>

@property (weak, nonatomic) ICiOSTableAttachmentView *parentAttachmentView;
@property (weak, nonatomic) ICTableAccessibilityController *tableAXController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityElements;
- (long long)accessibilityContainerType;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityColumnCount;
- (id)accessibilityDataTableCellElementForRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (id)accessibilityHeaderElementsForColumn:(unsigned long long)a0;
- (id)accessibilityHeaderElementsForRow:(unsigned long long)a0;
- (unsigned long long)accessibilityRowCount;
- (id)initWithTableAccessibilityController:(id)a0 parentAttachmentView:(id)a1;

@end
