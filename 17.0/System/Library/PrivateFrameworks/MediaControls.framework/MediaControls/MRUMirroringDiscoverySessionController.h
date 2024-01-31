@class NSArray, AVOutputDeviceDiscoverySession;
@protocol MRUMirroringDiscoverySessionControllerDelegate;

@interface MRUMirroringDiscoverySessionController : NSObject

@property (retain, nonatomic) AVOutputDeviceDiscoverySession *outputDeviceDiscoverySession;
@property (retain, nonatomic) NSArray *cachedAvailableOutputDevices;
@property (retain, nonatomic) NSArray *availableOutputDevices;
@property (nonatomic) BOOL needsUpdate;
@property (nonatomic) BOOL detailedDiscovery;
@property (weak, nonatomic) id<MRUMirroringDiscoverySessionControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isExternalOutputDeviceAvailable) BOOL externalOutputDeviceAvailable;

- (id)init;
- (void)dealloc;
- (void)availableOutputDevicesChangedNotification:(id)a0;
- (BOOL)sortDeviceToTop:(id)a0;
- (void)updateDiscoveryMode;
- (void)stopDetailedDiscovery;
- (void)updateOutputDevicesForAvailableOutputDevices:(id)a0;
- (void)updateOutputDevicesIfNeeded;
- (void).cxx_destruct;
- (void)startDetailedDiscovery;
- (id)filterAndSortOutputDevices:(id)a0;
- (id)initWithDeviceFeatures:(unsigned long long)a0;
- (void)updateOutputDevicesImmediately;

@end
