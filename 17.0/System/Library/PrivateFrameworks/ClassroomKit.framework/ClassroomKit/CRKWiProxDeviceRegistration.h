@class NSDictionary;

@interface CRKWiProxDeviceRegistration : NSObject

@property (copy, nonatomic) NSDictionary *devices;
@property (copy, nonatomic) NSDictionary *options;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
