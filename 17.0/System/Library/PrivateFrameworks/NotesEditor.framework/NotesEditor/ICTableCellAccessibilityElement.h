@class NSString, NSArray, ICTableAccessibilityController, NSUUID, NSAttributedString;

@interface ICTableCellAccessibilityElement : UIAccessibilityElement <UIAccessibilityContainerDataTableCell, ICAccessibilityRotorSearchElement>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *supportedRotorTypes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } textRangeInNote;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRect;
@property (weak, nonatomic) ICTableAccessibilityController *tableAXController;
@property (readonly, nonatomic) NSUUID *rowID;
@property (readonly, nonatomic) NSUUID *columnID;
@property (readonly, nonatomic) unsigned long long rowIndex;
@property (readonly, nonatomic) unsigned long long columnIndex;
@property (readonly, nonatomic) NSAttributedString *attributedContentString;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameInScreenSpace;
@property (readonly, nonatomic) BOOL isEditing;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityUserInputLabels;
- (BOOL)accessibilityActivate;
- (id)accessibilityContainer;
- (id)accessibilityCustomRotors;
- (id)accessibilityDragSourceDescriptors;
- (void)accessibilityElementDidBecomeFocused;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityColumnRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (id)accessibilityElementForRow:(long long)a0 andColumn:(long long)a1;
- (id)_accessibilityTextInputElement;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)selectCellRange;
- (BOOL)addColumnAfter;
- (BOOL)addRowBelow;
- (BOOL)deleteColumn;
- (BOOL)deleteRow;
- (id)initWithTableAccessibilityController:(id)a0 columnID:(id)a1 rowID:(id)a2;
- (void)moveFocusToFirstSelectedCell;
- (id)noteEditorController;
- (void)reverseTableDirection;
- (BOOL)selectCurrentColumn;
- (BOOL)selectCurrentRow;
- (BOOL)selectTable;

@end
