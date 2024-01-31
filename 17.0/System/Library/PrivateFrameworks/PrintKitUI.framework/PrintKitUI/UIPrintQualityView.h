@class UIPrintSegmentedSlider, UIPrintInfo, UILabel;

@interface UIPrintQualityView : UIView

@property (retain, nonatomic) UIPrintInfo *printInfo;
@property (retain, nonatomic) UIPrintSegmentedSlider *qualitySlider;
@property (retain, nonatomic) UILabel *draftLabel;
@property (retain, nonatomic) UILabel *normalLabel;
@property (retain, nonatomic) UILabel *bestLabel;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)loadViews;
- (void)changeQuality:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 printInfo:(id)a1;
- (void)updateFromPrintInfo;

@end
