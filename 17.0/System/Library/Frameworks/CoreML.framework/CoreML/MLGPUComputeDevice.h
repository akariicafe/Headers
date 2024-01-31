@class NSString;
@protocol MTLDevice;

@interface MLGPUComputeDevice : NSObject <MLComputeDeviceProtocol>

@property (readonly, nonatomic) id<MTLDevice> metalDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceWithMetalDevice:(id)a0;

- (id)initWithMetalDevice:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
