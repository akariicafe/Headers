@class HMDHome;

@interface HMDAccessoryCount : NSObject

@property (weak) HMDHome *home;
@property (readonly) unsigned long long numHAPAccessories;
@property (readonly) unsigned long long numCameraAccessories;
@property (readonly) unsigned long long numCameraAccessoriesRecordingEnabled;
@property (readonly) unsigned long long numSecurityClassAccessories;
@property (readonly) unsigned long long numCriticalSensorAccessories;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (unsigned long long)numHAPAccessoriesWithAnyServiceWithTypes:(id)a0;

@end
