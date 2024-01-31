@protocol PXMapOptionsChooseMapViewDelegate;

@interface PXMapOptionsChooseMapSheetController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ contentViewController;
    void /* unknown type, empty encoding */ blurredBackgroundView;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ controllerDelegate;
}

@property (nonatomic, weak) id<PXMapOptionsChooseMapViewDelegate> delegate;
@property (nonatomic) unsigned long long mapStyle;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (id)init;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)handleCloseAction;

@end
