@class NSString;
@protocol MTSyncStatusProviderDelegate;

@interface MTCompanionSyncStatusProvider : NSObject <MTPairedDeviceObserver, MTSyncStatusProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MTSyncStatusProviderDelegate> syncStatusProviderDelegate;

+ (BOOL)deviceSupportsSyncing;

@end
