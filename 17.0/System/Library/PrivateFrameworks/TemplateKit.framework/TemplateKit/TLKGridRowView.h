@class TLKGridLayoutManager, NSMutableArray, TLKTableRow;

@interface TLKGridRowView : TLKView

@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) NSMutableArray *imageViews;
@property (retain, nonatomic) NSMutableArray *currentListOfViews;
@property (nonatomic) unsigned long long indexOfFirstCenteredColumnForForcedCentering;
@property (nonatomic) unsigned long long indexOfFirstTrailingColumn;
@property (nonatomic) BOOL needsSizingPass;
@property (retain, nonatomic) TLKGridLayoutManager *manager;
@property (retain, nonatomic) TLKTableRow *tableRow;

+ (void)updateLabel:(id)a0 withRichText:(id)a1 alignment:(long long)a2;

- (id)init;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (id)leadingTextView;
- (void)generateLabelsAndImagesIfNecessary;
- (void)observedPropertiesChanged;
- (void)resetStateOfAllViews;

@end
