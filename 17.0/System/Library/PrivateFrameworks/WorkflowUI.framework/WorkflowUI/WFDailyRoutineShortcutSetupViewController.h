@class UINavigationController, NSMutableDictionary, NSString, CLCircularRegion, WFDailyRoutineShortcutSetupFlow, NSMutableArray;
@protocol WFDailyRoutineShortcutSetupViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupViewController : UIViewController <WFDailyRoutineShortcutSetupQuestionViewControllerDelegate, WFDailyRoutineShortcutSetupTriggerViewControllerDelegate, WFLocationPickerViewControllerDelegate>

@property (retain, nonatomic) UINavigationController *setupNavigationController;
@property (retain, nonatomic) NSMutableDictionary *actionsPerQuestionIndex;
@property (retain, nonatomic) CLCircularRegion *selectedRegion;
@property (retain, nonatomic) NSMutableArray *setupStepEvents;
@property (readonly, nonatomic) unsigned long long metricsSource;
@property (weak, nonatomic) id<WFDailyRoutineShortcutSetupViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)didSelectCancel;
- (void)configureBackButtonOnViewController:(id)a0;
- (long long)currentQuestionIndex;
- (id)currentStepEvent;
- (void)dailyRoutineShortcutSetupQuestionViewController:(id)a0 didAddActions:(id)a1;
- (void)dailyRoutineShortcutSetupQuestionViewControllerDidSkip:(id)a0;
- (void)dailyRoutineShortcutSetupTriggerViewControllerDidAddTrigger:(id)a0;
- (void)dailyRoutineShortcutSetupTriggerViewControllerDidSkip:(id)a0;
- (void)finishWithTrigger:(id)a0;
- (id)initWithFlow:(id)a0 metricsSource:(unsigned long long)a1;
- (void)locationPicker:(id)a0 didFinishWithValue:(id)a1;
- (void)locationPickerDidCancel:(id)a0;
- (void)pushStepForQuestion:(id)a0;
- (void)pushToNextStep;
- (void)pushTriggerSetupStep;
- (id)selectedLocationForDailyRoutineShortcutSetupQuestionViewController:(id)a0;
- (void)submitMetrics:(BOOL)a0;

@end
