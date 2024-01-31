@class ICViewOnlyPopoverViewController, ICSelectorDelayer, NSString, NSLayoutConstraint, UIButton;

@interface ICQLPreviewController : QLPreviewController <UIPopoverPresentationControllerDelegate>

@property (retain, nonatomic) UIButton *viewOnlyDocumentButton;
@property (retain, nonatomic) ICSelectorDelayer *hideViewOnlyDocumentButtonSelectorDelayer;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewOnlyDocumentButtonFrame;
@property (readonly, nonatomic) BOOL viewOnlyDocumentButtonIsVisible;
@property (retain, nonatomic) NSLayoutConstraint *bottomButtonConstraint;
@property (readonly, nonatomic) double bottomButtonSpacing;
@property (retain, nonatomic) ICViewOnlyPopoverViewController *viewOnlyPopoverController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateBackgroundColor;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)hideViewOnlyButton;
- (void)popoverDidDismiss;
- (void)showViewOnlyDocumentPopover;
- (void)showViewOnlyWarning;

@end
