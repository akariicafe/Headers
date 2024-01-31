@class NSAttributedString, HKEmergencyCardFooterCell;

@interface HKEmergencyCardFooterTableItem : HKEmergencyCardTableItem {
    HKEmergencyCardFooterCell *_cell;
}

@property (retain, nonatomic) NSAttributedString *attributedTitleForFooter;
@property (copy, nonatomic) id /* block */ shouldInteractWithURLBlock;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInset;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)_cell;
- (id)initInEditMode:(BOOL)a0;
- (BOOL)hasPresentableData;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;

@end
