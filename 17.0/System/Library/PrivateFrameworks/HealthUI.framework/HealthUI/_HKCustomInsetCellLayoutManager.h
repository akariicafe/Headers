@interface _HKCustomInsetCellLayoutManager : UITableViewCellLayoutManager

@property (nonatomic) double topInset;
@property (nonatomic) double textLabelLeftInset;

+ (BOOL)requiresLegacyLayout;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForCell:(id)a0 rowWidth:(double)a1 forSizing:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessoryEndingRectForCell:(id)a0 forNewEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessoryStartingRectForCell:(id)a0 forNewEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentEndingRectForCell:(id)a0 forDisplayOfDeleteConfirmation:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentEndingRectForCell:(id)a0 forNewEditingState:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForCell:(id)a0 forState:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentStartingRectForCell:(id)a0 forDisplayOfDeleteConfirmation:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentStartingRectForCell:(id)a0 forNewEditingState:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editControlEndingRectForCell:(id)a0 forNewEditingState:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editControlStartingRectForCell:(id)a0 forNewEditingState:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingAccessoryEndingRectForCell:(id)a0 forNewEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingAccessoryStartingRectForCell:(id)a0 forNewEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;

@end
