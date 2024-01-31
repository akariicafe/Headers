@class PRIncomingCallTextViewAdapter;

@interface PREditingTitleLayoutPickerCellView : PREditingPickerCellView

@property (readonly, nonatomic) PRIncomingCallTextViewAdapter *textViewAdapter;

- (void)setLayout:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (void)setFont:(id)a0;

@end
