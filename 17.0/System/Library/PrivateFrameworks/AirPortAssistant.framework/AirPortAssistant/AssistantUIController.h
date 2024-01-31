@class StepByStepController, NSString, NSDictionary, NSArray, NSMutableDictionary, AutoGuessController, AUSetupController;

@interface AssistantUIController : NSObject <AutoGuessUIDelegate, SetupUIDelegate, StepByStepUIDelegate, AssistantUIDelegateResult, SetupUIConfigDelegate>

@property (readonly) int assistantResult;
@property (retain) NSString *targetMACAddress;
@property (retain) NSDictionary *targetScanRecord;
@property (retain) NSDictionary *targetBrowseRecord;
@property (retain) NSArray *paramScanResults;
@property id delegate;
@property (retain) NSMutableDictionary *setupOptions;
@property (readonly) int state;
@property (retain) AutoGuessController *autoGuessController;
@property (retain) AUSetupController *setupController;
@property (retain) StepByStepController *stepByStepController;
@property (retain) NSDictionary *guessCompleteDict;
@property (readonly) int connectionStatusSelectorAwaitingResolution;
@property (retain) NSDictionary *lastAssociatedInfo;
@property (retain) NSDictionary *lastAutoguessInstrumentation;
@property (retain) NSDictionary *lastSetupInstrumentation;
@property (retain) NSDictionary *lastStepByStepInstrumentation;

- (id)init;
- (void)dealloc;
- (void)autoguessProgressComplete:(id)a0;
- (void)autoguessProgressUpdated:(int)a0 paramString:(id)a1;
- (void)autoguessUpdateTargetInfo:(id)a0;
- (int)cancelCurrentAssistantState:(BOOL)a0;
- (void)deliverSetupUIConfigResult:(int)a0 withOptions:(id)a1;
- (int)doneWithAssistant:(BOOL)a0;
- (void)handlePresentAutoGuessUIFromAutoGuessCompleteResult:(BOOL)a0;
- (id)modifyTopoUIInLayer:(id)a0 withLayout:(id)a1 andOwningView:(id)a2 targetProductID:(id)a3 targetDeviceKind:(id)a4 targetName:(id)a5 targetWiFiName:(id)a6 sourceProductID:(id)a7 sourceDeviceKind:(id)a8 sourceName:(id)a9 sourceWiFiName:(id)a10 connectionType:(id)a11;
- (void)presentUIForConnectionVerification:(int)a0 status:(int)a1 paramDict:(id)a2;
- (void)presentUIForConnectionVerificationResult:(int)a0 withOptions:(id)a1;
- (void)presentUIForStepByStepNextStepResult:(int)a0 withOptions:(id)a1;
- (void)presentUIForUIConfigPrompt:(int)a0 paramDict:(id)a1;
- (void)restoreNetworkDone:(id)a0;
- (BOOL)restoreNetworkIfNeeded:(BOOL)a0 disassociateIfNeeded:(BOOL)a1 forceQuit:(BOOL)a2;
- (void)setupCompleteWithResult:(int)a0 baseStationInfo:(id)a1 forController:(id)a2;
- (void)setupProgressUpdated:(int)a0 status:(int)a1 paramDict:(id)a2 forController:(id)a3;
- (id)setupPromptStringForBaseInfo:(id)a0 andResult:(int)a1;
- (void)setupUIConfigConnectionStatusUpdated:(int)a0 status:(int)a1 paramDict:(id)a2 forController:(id)a3;
- (void)setupUIConfigPrompt:(int)a0 paramDict:(id)a1 forController:(id)a2;
- (void)showUIConfigPromptResult:(int)a0 withOptions:(id)a1;
- (int)startAutoGuess;
- (int)startRestoreFromAutoGuessRecommendation;
- (int)startRestoreNetwork:(id)a0;
- (int)startSetupFromAutoGuessRecommendation:(id)a0;
- (int)startSetupFromStepByStepResults:(id)a0;
- (int)startStepByStepFromAutoGuessRecommendation;
- (void)stepByStepCompleteWithResult:(int)a0 paramDict:(id)a1;
- (void)stepByStepNextStep:(int)a0 paramDict:(id)a1;
- (void)stepByStepProgressUpdated:(int)a0 status:(int)a1 paramString:(id)a2;

@end
