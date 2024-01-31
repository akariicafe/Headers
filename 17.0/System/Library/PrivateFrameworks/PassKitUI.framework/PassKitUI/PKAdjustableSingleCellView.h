@class UIColor, PKPaymentPass, NSString, UIImageView, PKContinuousButton, UILabel, PKPaymentPassAction;

@interface PKAdjustableSingleCellView : UIView <PKPaymentDashboardCellActionHandleable> {
    UIImageView *_disclosureView;
    PKContinuousButton *_actionButton;
    double _topPadding;
    BOOL _isTemplateLayout;
    UILabel *_titleView;
    UILabel *_detailView;
    UILabel *_subDetailView;
    unsigned long long _deferUpdateCounter;
    BOOL _animated;
}

@property (copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic) BOOL enableDisclosure;
@property (copy, nonatomic) PKPaymentPassAction *action;
@property (copy, nonatomic) PKPaymentPass *pass;
@property (copy, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) UIColor *detailColor;
@property (copy, nonatomic) UIColor *subDetailColor;
@property (nonatomic) long long titleLineBreakMode;
@property (nonatomic) long long detailLineBreakMode;
@property (nonatomic) long long subDetailLineBreakMode;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *subDetail;
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
- (void)_actionButtonTapped:(id)a0;
- (id)_detailFont;
- (void)_updateContent:(BOOL)a0;
- (BOOL)_needsThirdLine;
- (void)_applyStyles;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_performInit;
- (id)_smallerDetailFont;
- (id)_subDetailFont;
- (void)endUpdates:(BOOL)a0;
- (void)layoutIfNeededAnimated:(BOOL)a0;

@end
