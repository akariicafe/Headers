@class PKPaymentPass, UISegmentedControl, PKPaymentService, NSArray, PKPaymentApplication, UIView, PKPassPaymentSummaryHeaderView;
@protocol PKPassPaymentApplicationViewDelegate;

@interface PKPassPaymentApplicationView : UIView {
    PKPassPaymentSummaryHeaderView *_headerView;
    UIView *_horizontalSeparator;
    UISegmentedControl *_segmentedControl;
    PKPaymentService *_paymentService;
    NSArray *_paymentApplications;
}

@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKPaymentApplication *selectedApplication;
@property (weak, nonatomic) id<PKPassPaymentApplicationViewDelegate> delegate;
@property (nonatomic) BOOL showHeader;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithPass:(id)a0;
- (void)_selectedApplicationDidChange:(id)a0;

@end
