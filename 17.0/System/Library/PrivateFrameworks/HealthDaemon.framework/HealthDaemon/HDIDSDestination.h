@interface HDIDSDestination : NSObject <NSCopying>

@property (readonly, copy, nonatomic) id /* block */ deviceFilterBlock;

+ (id)initWithAllowedDeviceTypes:(id)a0;
+ (id)validHealthSoftwareDeviceTypes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeviceFilterBlock:(id /* block */)a0;

@end
