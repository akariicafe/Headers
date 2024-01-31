@class CLKComplicationTemplateModularLargeTable, CLKUIColoringLabel, UIView;
@protocol CDComplicationImageView;

@interface NTKModularLargeTableTemplateView : NTKModularLargeColumnTemplateView {
    UIView<CDComplicationImageView> *_headerImageView;
    CLKUIColoringLabel *_headerLabel;
    CLKUIColoringLabel *_row1Column1Label;
    CLKUIColoringLabel *_row1Column2Label;
    CLKUIColoringLabel *_row2Column1Label;
    CLKUIColoringLabel *_row2Column2Label;
}

@property (retain, nonatomic) CLKComplicationTemplateModularLargeTable *complicationTemplate;

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)_update;
- (void)_layoutContentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_enumerateColumnRowsWithBlock:(id /* block */)a0;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)a0;

@end
