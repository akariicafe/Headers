@class NSMutableArray;

@interface OBStackedIconTextList : UIStackView {
    double _itemSpacing;
    NSMutableArray *_entries;
}

@property (nonatomic) double iconTextPadding;
@property (nonatomic) unsigned long long dataDetectorTypes;

- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)addEntryWithIcon:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 text:(id)a2;
- (void)addEntryWithIcon:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 attributedText:(id)a2;

@end
