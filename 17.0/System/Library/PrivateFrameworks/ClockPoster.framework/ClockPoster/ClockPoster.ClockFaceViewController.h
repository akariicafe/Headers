@interface ClockPoster.ClockFaceViewController : UIViewController {
    void /* unknown type, empty encoding */ hostView;
    void /* unknown type, empty encoding */ isDisplayStyleRedMode;
    void /* unknown type, empty encoding */ canAnimateRedMode;
}

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
