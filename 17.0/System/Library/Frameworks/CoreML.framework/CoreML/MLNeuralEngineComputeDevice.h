@class NSString;

@interface MLNeuralEngineComputeDevice : NSObject <MLComputeDeviceProtocol>

@property (readonly, nonatomic) long long totalCoreCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)physicalDevice;

- (id)initWithTotalCoreCount:(long long)a0;
- (BOOL)isAccessible;

@end
