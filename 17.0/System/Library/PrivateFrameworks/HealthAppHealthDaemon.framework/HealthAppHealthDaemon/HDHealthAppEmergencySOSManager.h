@class HKCoreTelephonyClient, NSString, HDProfile, FLFollowUpController, NSObject;
@protocol OS_dispatch_queue;

@interface HDHealthAppEmergencySOSManager : NSObject <HKCoreTelephonyClientDelegate, HDProfileReadyObserver>

@property (retain, nonatomic) HKCoreTelephonyClient *coreTelephonyClient;
@property (retain, nonatomic) FLFollowUpController *followUpController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)stewieSupportChanged:(id)a0;
- (id)actionIdentifierForOnboardingStatus:(id)a0;
- (void)clearPendingFollowUpItems;
- (id)followUpItemDescription;
- (id)getEmergencyOnboardingStatus;
- (id)makeFollowUpItemWithActionIdentifier:(id)a0;
- (void)submitFollowUpItem:(id)a0;
- (void)submitStewieFollowUpItemIfNeeded;

@end
