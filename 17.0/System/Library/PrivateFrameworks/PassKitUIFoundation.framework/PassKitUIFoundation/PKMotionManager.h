@class NSHashTable, CMMotionManager, CMDeviceMotion;

@interface PKMotionManager : NSObject {
    CMMotionManager *_motionManager;
    NSHashTable *_clients;
}

@property (readonly, nonatomic, getter=isMonitoring) BOOL monitoring;
@property (readonly, nonatomic) CMDeviceMotion *motion;

+ (id)sharedManager;

- (void)registerClient:(id)a0;
- (id)init;
- (void)dealloc;
- (id)_init;
- (void)unregisterClient:(id)a0;
- (void).cxx_destruct;
- (void)updateWithMotion:(id)a0;

@end
