@class NSString, NSNumber;

@interface CPSDeviceVariant : NSObject

@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *device;
@property (retain, nonatomic) NSNumber *size;

- (void).cxx_destruct;

@end
