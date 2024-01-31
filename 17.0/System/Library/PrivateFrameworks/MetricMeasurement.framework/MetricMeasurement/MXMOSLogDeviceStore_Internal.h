@class NSMutableDictionary, NSString, OSActivityStream;
@protocol MXMProbeableDevice;

@interface MXMOSLogDeviceStore_Internal : NSObject <OSDeviceDelegate> {
    OSActivityStream *_stream;
}

@property (class, readonly, nonatomic) MXMOSLogDeviceStore_Internal *shared;

@property (readonly, nonatomic) id<MXMProbeableDevice> hostDevice;
@property (readonly, nonatomic) NSMutableDictionary *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)activityStream:(id)a0 deviceUDID:(id)a1 deviceID:(id)a2 status:(long long)a3 error:(id)a4;

@end
