@class NSString, NSArray;

@interface DADiscoveryConfiguration : NSObject <CUXPCCodable, NSCopying>

@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL presenceOnly;
@property (copy, nonatomic) NSArray *bluetoothCompanyIdentifiers;
@property (copy, nonatomic) NSArray *bluetoothServices;
@property (copy, nonatomic) NSArray *bonjourServiceTypes;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
