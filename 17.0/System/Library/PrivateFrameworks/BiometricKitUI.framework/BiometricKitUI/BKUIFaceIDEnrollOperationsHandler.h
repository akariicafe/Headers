@class NSData, NSString, NSObject, NSDate, BKIdentity, LAContext, NSMutableArray, BKDevicePearl, SFClient, BKEnrollPearlOperation, BKUIMatchVerifyPearlOperation;
@protocol OS_dispatch_queue, BKUIPearlEnrollOperationsDelegate;

@interface BKUIFaceIDEnrollOperationsHandler : NSObject <BKEnrollOperationDelegate, BKEnrollPearlOperationDelegate, LAUIDelegate> {
    SFClient *_sharingclient;
    LAContext *_authContext;
    BOOL _enrollOperationInProgress;
    NSObject<OS_dispatch_queue> *_enrollStartStopQueue;
    NSDate *_lastFaceFoundDate;
}

@property (retain, nonatomic) BKEnrollPearlOperation *enrollOperation;
@property (retain, nonatomic) BKDevicePearl *device;
@property (nonatomic) BOOL supportsPeriocularEnrollment;
@property (nonatomic) BOOL glassesEnforcementError;
@property (nonatomic) double bioKitCompletionPercentage;
@property (nonatomic) BOOL canStartEnrollmentOperation;
@property (weak, nonatomic) id<BKUIPearlEnrollOperationsDelegate> operationsDelegate;
@property (copy, nonatomic) NSString *credential;
@property (nonatomic, getter=isSuspended) BOOL suspend;
@property (nonatomic) BOOL inbuddy;
@property (retain, nonatomic) NSMutableArray *poseStatus;
@property (nonatomic) unsigned long long enrollmentConfiguration;
@property (nonatomic) long long enrollmentType;
@property (retain, nonatomic) BKIdentity *identity;
@property (retain, nonatomic) NSData *externalizedAuthContext;
@property (nonatomic) BOOL glassesFound;
@property (nonatomic) BOOL centerBinComplete;
@property (nonatomic) BOOL userSelectedUseAccessibilityEnrollment;
@property (retain, nonatomic) BKUIMatchVerifyPearlOperation *matchOperation;
@property (copy, nonatomic) id /* block */ matchUserThenDoSingleEnrollmentCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handlersForEnrollmentConfiguration:(unsigned long long)a0 inBuddy:(BOOL)a1 delegate:(id)a2 credential:(id)a3 externalizedAuthContext:(id)a4;

- (id)init;
- (void)operation:(id)a0 faceDetectStateChanged:(id)a1;
- (void).cxx_destruct;
- (BOOL)isActive;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)enrollOperation:(id)a0 failedWithReason:(long long)a1;
- (void)enrollOperation:(id)a0 finishedWithEnrollResult:(id)a1;
- (void)enrollOperation:(id)a0 percentCompleted:(long long)a1;
- (void)enrollOperation:(id)a0 progressedWithInfo:(id)a1;
- (void)_cleanupEnroll:(BOOL)a0;
- (void)_removeIdentity;
- (void)_cleanupEnroll;
- (BOOL)_completeOperationWithError:(id *)a0;
- (BOOL)_matchOperationPreflightCheck:(out id *)a0;
- (BOOL)_startOperationWithError:(id *)a0;
- (BOOL)_validateEnrolledPoses:(id)a0;
- (void)advanceEnrollmentState;
- (id)bkIdentities;
- (void)cancelCurrentEnrollmentOperationIfUnfinished;
- (void)cancelEnroll;
- (void)cancelEnrollForRotation;
- (void)cancelEnrollPreserveIdentity;
- (void)cleanupEnroll;
- (BOOL)completeCurrentEnrollOperationWithError:(id *)a0;
- (id)getAuthContextForCredentialError:(id *)a0;
- (id)getAuthContextForCredentialError:(id *)a0 authContext:(id *)a1;
- (long long)glassesRequirement;
- (id)initWithBKPearlEnrollmentType:(long long)a0;
- (BOOL)isEnrollmentAugmentationOnly;
- (void)matchOperation:(id)a0 failedToMatchWithUserPositionSubstate:(int)a1 operationCompleteAction:(id /* block */)a2;
- (void)matchUserForGlassesPhaseEnrollmentWithCompletionAction:(id /* block */)a0;
- (void)matchUserForSecondPhaseEnrollmentWithCompletionAction:(id /* block */)a0;
- (void)matchUserThenDoSingleEnrollmentWithExisitingEnrollmentConfigCompletionAction:(id /* block */)a0;
- (void)retryOperation;
- (void)retryPressed;
- (BOOL)shouldShowRetryUI;
- (BOOL)showAddGlassesButton;
- (void)startEnroll;
- (void)startEnrollForEnrollmentType:(long long)a0 glassesRequirement:(long long)a1 identity:(id)a2 operationStartedActionBlock:(id /* block */)a3;

@end
