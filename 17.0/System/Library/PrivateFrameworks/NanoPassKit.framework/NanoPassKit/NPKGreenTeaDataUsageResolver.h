@class NFHardwareManager, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NPKGreenTeaDataUsageResolver : NSObject <NFHardwareEventListener>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) BOOL currentlyResolving;
@property (retain, nonatomic) NFHardwareManager *hardwareManager;
@property (nonatomic) BOOL isNFCDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)isNFCDisabled;
+ (void)requestFetchNFCState;
+ (void)resolveGreenTeaDataUsageIfNecessary;

- (id)init;
- (void).cxx_destruct;
- (void)didChangeRadioState:(BOOL)a0;
- (void)_setupNearfield;
- (void)_requestFetchNFCState;
- (void)_resolveGreenTeaDataUsageIfNecessaryWithCompletion:(id /* block */)a0;
- (void)resolveGreenTeaDataUsageIfNecessary;

@end
