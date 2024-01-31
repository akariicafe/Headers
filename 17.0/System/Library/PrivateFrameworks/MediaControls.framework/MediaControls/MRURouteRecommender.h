@class IRServiceToken, IRSession, NSArray, NSString, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, MRRouteRepresentable;

@interface MRURouteRecommender : NSObject <IRSessionDelegate>

@property (retain, nonatomic) IRSession *session;
@property (retain, nonatomic) IRServiceToken *serviceToken;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (nonatomic) long long mode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *donationQueue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } recommendedRoutesLock;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } donatedRoutesLock;
@property (nonatomic) int firstUnlockToken;
@property (retain, nonatomic) NSArray *recommendedRoutes;
@property (retain, nonatomic) NSArray *donatedRoutes;
@property (retain, nonatomic) id<MRRouteRepresentable> lastDonatedPickerChoice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)session:(id)a0 didFailWithError:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)session:(id)a0 suspendedWithReason:(long long)a1;
- (void)session:(id)a0 suspensionReasonEnded:(long long)a1 isNoLongerSuspended:(BOOL)a2;
- (id)irCandidateFor:(id)a0;
- (void)addDonatedRoute:(id)a0;
- (void)donateGroupedOutputDevices:(id)a0;
- (void)donatePickerChoiceFor:(id)a0 presentingAppBundleId:(id)a1 nowPlayingAppBundleId:(id)a2 visibleMediaApps:(id)a3;
- (void)initializeSession;
- (void)initializeSessionWhenAppropriate;
- (id)localizeRemoteControllableBundleIdentifier:(id)a0;
- (id)recommendationForGroupedOutputDevices:(id)a0;
- (void)session:(id)a0 didUpdateContext:(id)a1;
- (id)sortEndpointRoutes:(id)a0;
- (void)updateRecommendations;

@end
