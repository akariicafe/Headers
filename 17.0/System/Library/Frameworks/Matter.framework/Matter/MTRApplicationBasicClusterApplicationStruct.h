@class NSNumber, NSString;

@interface MTRApplicationBasicClusterApplicationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *catalogVendorID;
@property (copy, nonatomic) NSNumber *catalogVendorId;
@property (copy, nonatomic) NSString *applicationID;
@property (copy, nonatomic) NSString *applicationId;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
