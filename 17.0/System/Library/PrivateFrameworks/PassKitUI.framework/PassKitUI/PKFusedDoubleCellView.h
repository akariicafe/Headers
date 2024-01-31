@class UIColor, UIFont, PKPaymentPass, NSString, UIView, UIImageView, UILabel;

@interface PKFusedDoubleCellView : UIView <PKPaymentDashboardCellActionHandleable> {
    UIView *_separatorView;
    UIImageView *_disclosureView;
    UILabel *_leftTitleView;
    UILabel *_leftDetailView;
    UILabel *_leftSubDetailView;
    UILabel *_rightTitleView;
    UILabel *_rightDetailView;
    UILabel *_rightSubDetailView;
    unsigned long long _deferUpdateCounter;
}

@property (nonatomic) BOOL enableDisclosure;
@property (copy, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) UIFont *titleFont;
@property (copy, nonatomic) UIColor *leftTitleColor;
@property (copy, nonatomic) UIColor *leftDetailColor;
@property (copy, nonatomic) UIColor *leftSubDetailColor;
@property (copy, nonatomic) UIColor *rightTitleColor;
@property (copy, nonatomic) UIColor *rightDetailColor;
@property (copy, nonatomic) UIColor *rightSubDetailColor;
@property (copy, nonatomic) NSString *leftTitle;
@property (copy, nonatomic) NSString *leftDetail;
@property (copy, nonatomic) NSString *leftSubDetail;
@property (copy, nonatomic) NSString *rightTitle;
@property (copy, nonatomic) NSString *rightDetail;
@property (copy, nonatomic) NSString *rightSubDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_titleFont;
- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (void)beginUpdates;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupViews;
- (long long)viewType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_detailFont;
- (void)_updateContent:(BOOL)a0;
- (double)_layoutLabelsSideBySide:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 halfSize:(struct CGSize { double x0; double x1; })a1 leftTitleSize:(struct CGSize { double x0; double x1; })a2 leftDetailSize:(struct CGSize { double x0; double x1; })a3 leftSubDetailSize:(struct CGSize { double x0; double x1; })a4 disclosureSize:(struct CGSize { double x0; double x1; })a5 disclosurePadding:(double)a6 rightSize:(struct CGSize { double x0; double x1; })a7 rightTitleSize:(struct CGSize { double x0; double x1; })a8 rightDetailSize:(struct CGSize { double x0; double x1; })a9 rightSubDetailSize:(struct CGSize { double x0; double x1; })a10 isTemplateLayout:(BOOL)a11;
- (double)_layoutLabelsStacked:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 disclosureSize:(struct CGSize { double x0; double x1; })a1 disclosurePadding:(double)a2 isTemplateLayout:(BOOL)a3;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)_performInit;
- (id)_subDetailFont;
- (void)endUpdates:(BOOL)a0;

@end
