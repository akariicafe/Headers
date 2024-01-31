@class NSMutableDictionary, NSArray, NSString, NSMutableArray, MLMetalDeviceObserver;
@protocol NSObject;

@interface MLGPUComputeDeviceRegistry : NSObject <MLComputeDeviceRegistryProtocol> {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
}

@property (readonly, copy, nonatomic) NSMutableDictionary *availableGPUDevices;
@property (readonly, copy, nonatomic) NSMutableArray *pendingChanges;
@property (readonly, nonatomic) MLMetalDeviceObserver *metalDeviceObserver;
@property (retain, nonatomic) id<NSObject> observationToken;
@property (readonly, copy, nonatomic) NSArray *registeredComputeDevices;
@property (readonly, copy, nonatomic) NSArray *registeredAndAccessibleComputeDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRegistry;
+ (id)registryWithMetalDeviceObserver:(id)a0;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithMetalDeviceObserver:(id)a0;
- (void)registerGPUDevices;

@end
