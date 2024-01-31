@class NSSet, GCGenericDeviceInputEventDriverModel, GCGenericDeviceRumbleModel;

@interface GCGenericDeviceDriverModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSSet *elements;
@property (readonly, copy) GCGenericDeviceInputEventDriverModel *input;
@property (readonly, copy) GCGenericDeviceRumbleModel *rumble;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)a0 error:(out id *)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
