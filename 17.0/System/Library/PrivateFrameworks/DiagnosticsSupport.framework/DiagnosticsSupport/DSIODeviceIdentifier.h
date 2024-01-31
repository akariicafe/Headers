@interface DSIODeviceIdentifier : NSObject

@property (readonly, nonatomic) unsigned long long accessoryModel;
@property (readonly, nonatomic) unsigned int usagePage;
@property (readonly, nonatomic) unsigned int usage;
@property (readonly, nonatomic) unsigned int vendorID;
@property (readonly, nonatomic) unsigned int productID;

+ (id)identifierForAccessoryModel:(unsigned long long)a0;
+ (id)identifierForIOHIDDevice:(struct __IOHIDDevice { } *)a0;

- (id)initWithAccessoryModel:(unsigned long long)a0 usagePage:(unsigned int)a1 usage:(unsigned int)a2 vendorID:(unsigned int)a3 productID:(unsigned int)a4;

@end
