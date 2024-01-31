@class CPSPanView, NSArray, CPSTemplateEnvironment, NSString;
@protocol CPSPanEventDelegate;

@interface CPSPanViewController : UIViewController <CPSPanViewDelegate, UIGestureRecognizerDelegate, CPSLinearFocusProviding> {
    BOOL _rightHandDrive;
}

@property (retain, nonatomic) CPSPanView *panView;
@property (retain, nonatomic) NSArray *nudgeGestureRecognizers;
@property (readonly, weak, nonatomic) CPSTemplateEnvironment *environment;
@property (weak, nonatomic) id<CPSPanEventDelegate> panDelegate;
@property (readonly, nonatomic) double sideButtonTopInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;

- (id)initWithEnvironment:(id)a0;
- (void)viewDidLoad;
- (id)preferredFocusEnvironments;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)_handleNudgeLongPress:(id)a0;
- (void)_handleNudgeTapped:(id)a0;
- (id)_linearFocusItems;
- (id)_linearFocusItemsWithPresentedMapButtons:(id)a0;
- (void)panView:(id)a0 panBeganWithDirection:(long long)a1;
- (void)panView:(id)a0 panEndedWithDirection:(long long)a1;
- (void)panView:(id)a0 panWithDirection:(long long)a1;

@end
