@class NSObject;
@protocol OS_xpc_object;

@interface _AFAudioPowerXPCSharedMemory : NSObject {
    NSObject<OS_xpc_object> *_xpcObject;
    unsigned long long _mappedLength;
    void *_sharedRegion;
}

@property (readonly, nonatomic) float averagePower;
@property (readonly, nonatomic) float peakPower;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (void)_destroyMapping;

@end
