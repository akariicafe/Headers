@class NSDictionary, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface SBKStoreClampsController : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *transactionClamps;
@property (nonatomic) double accountIdentifierCheckTimestamp;
@property (nonatomic) double authenticationNeededTimestamp;
@property (nonatomic) double userAcceptedSyncTimestamp;
@property (nonatomic) double networkingBlockedUntil;
@property (nonatomic) double backOffUntil;
@property (nonatomic) double userCancelledSignInBackOffUntil;
@property (nonatomic) double nextUserCancelBackOffInterval;
@property (retain, nonatomic) NSData *pendingUserDefaultArchivedData;

+ (id)sharedClampsController;

- (id)init;
- (void)reset;
- (void)encodeWithCoder:(id)a0;
- (void)saveToUserDefaults;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_canScheduleTransactionBasedOfNetworkingBlocked:(id)a0 error:(id *)a1;
- (BOOL)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)a0 error:(id *)a1;
- (BOOL)_canScheduleTransactionBasedOnBackOff:(id)a0 error:(id *)a1;
- (BOOL)_canScheduleTransactionBasedOnType:(id)a0 error:(id *)a1;
- (BOOL)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)a0 error:(id *)a1;
- (id)_keyForTransaction:(id)a0;
- (double)_rightNow;
- (void)accessTransactionClampsWithBlock:(id /* block */)a0;
- (void)backOffForTimeInterval:(double)a0;
- (BOOL)canScheduleTransaction:(id)a0 error:(id *)a1;
- (void)clearAccountIdentifierCheckTimestamp;
- (void)clearAuthenticationRequest;
- (void)clearBackOff;
- (void)clearNetworkingBlocked;
- (void)clearTimestampForTransaction:(id)a0;
- (void)clearUserAcceptedSyncTimestamp;
- (void)clearUserCancelledSignIn;
- (BOOL)hasAuthenticatedTooRecentlyForTransaction:(id)a0 error:(id *)a1;
- (BOOL)hasUserRecentlyAcceptedSync;
- (BOOL)isNetworkingBlocked;
- (void)setAccountIdentifierCheckTimestamp;
- (void)setAuthenticationRequest;
- (void)setNetworkingBlocked;
- (void)setTimestampForTransaction:(id)a0;
- (void)setUserAcceptedSyncTimestamp;
- (void)setUserCancelledSignIn;

@end
