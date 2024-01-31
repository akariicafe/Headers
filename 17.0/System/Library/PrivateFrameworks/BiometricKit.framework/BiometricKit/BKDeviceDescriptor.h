@interface BKDeviceDescriptor : NSObject

@property (nonatomic) long long type;

+ (void)initialize;
+ (id)deviceDescriptorForType:(long long)a0;

@end
