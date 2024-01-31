@class NSString, SUCoreConnectClient, NSObject;
@protocol OS_dispatch_queue;

@interface MAAutoAssetSetControl : NSObject <SUCoreConnectClientDelegate>

@property (readonly, retain, nonatomic) NSString *controlClientDomainName;
@property (readonly, retain, nonatomic) NSString *controlClientName;
@property (readonly, retain, nonatomic) NSString *controlClientProcessName;
@property (readonly, nonatomic) long long controlClientProcessID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (retain, nonatomic) SUCoreConnectClient *connectionClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)frameworkInstanceSetLogDomain;
+ (id)defaultDispatchQueue;
+ (id)frameworkInstanceUUID;
+ (id)frameworkDispatchQueue;
+ (id)activeSetJobSummary:(BOOL)a0 error:(id *)a1;
+ (id)activeSetJobSummary:(BOOL)a0 limitedToSetIdentifiers:(id)a1 error:(id *)a2;
+ (id)assetSetDescriptorInfo:(id)a0 error:(id *)a1;
+ (id)assetSetsOverview:(id *)a0;
+ (id)assetSetsOverview:(id)a0 limitedToSetIdentifiers:(id)a1 error:(id *)a2;
+ (id)autoAssetSetControl;
+ (id)knownAssetSetSummary:(BOOL)a0 error:(id *)a1;
+ (id)knownAssetSetSummary:(BOOL)a0 limitedToSetIdentifiers:(id)a1 error:(id *)a2;
+ (id)lockedAssetSetSummary:(BOOL)a0 error:(id *)a1;
+ (id)lockedAssetSetSummary:(BOOL)a0 limitedToSetIdentifiers:(id)a1 error:(id *)a2;
+ (id)scheduledSetJobSummary:(BOOL)a0 error:(id *)a1;
+ (id)scheduledSetJobSummary:(BOOL)a0 limitedToSetIdentifiers:(id)a1 error:(id *)a2;
+ (id)stagedAssetSetSummary:(BOOL)a0 error:(id *)a1;
+ (id)stagedAssetSetSummary:(BOOL)a0 limitedToSetIdentifiers:(id)a1 error:(id *)a2;
+ (long long)waitOnSemaphore:(id)a0 withTimeout:(long long)a1;

- (id)init;
- (void)connectionClosed;
- (void)connectToServerFrameworkCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)handleMessage:(id)a0 reply:(id /* block */)a1;
- (void)handleResponse:(id)a0 error:(id)a1;
- (void)_activeSetJobSummary:(BOOL)a0 limitedToSetIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)_autoAssetInstanceInfo:(id)a0 completion:(id /* block */)a1;
- (void)_autoAssetsOverview:(id)a0 limitedToSetIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)_failedControl:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 completion:(id /* block */)a4;
- (void)_failedControlInstanceInfo:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 completion:(id /* block */)a4;
- (void)_failedControlLockSummary:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 completion:(id /* block */)a4;
- (void)_failedControlOverview:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 completion:(id /* block */)a4;
- (void)_failedControlSummary:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 completion:(id /* block */)a4;
- (void)_knownAssetSummary:(BOOL)a0 limitedToSetIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)_lockedAssetSetSummary:(BOOL)a0 limitedToSetIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)_scheduledSetJobSummary:(BOOL)a0 limitedToSetIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)_stagedAssetSetSummary:(BOOL)a0 limitedToSetIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)_successControl:(id)a0 completion:(id /* block */)a1;
- (void)_successControlInstanceInfo:(id)a0 withInstanceInfo:(id)a1 completion:(id /* block */)a2;
- (void)_successControlLockSummary:(id)a0 withLockSummaryEntries:(id)a1 completion:(id /* block */)a2;
- (void)_successControlOverview:(id)a0 withOverviewEntries:(id)a1 completion:(id /* block */)a2;
- (void)_successControlSummary:(id)a0 withJobSummaryEntries:(id)a1 completion:(id /* block */)a2;

@end
