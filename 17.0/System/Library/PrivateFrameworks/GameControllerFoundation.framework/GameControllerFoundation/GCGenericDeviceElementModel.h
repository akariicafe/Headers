@class NSPredicate, NSString;

@interface GCGenericDeviceElementModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned int elementCookie;
@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSString *identifier;
@property (readonly) int typeOverride;
@property (readonly) long long calibrationMin;
@property (readonly) long long calibrationMax;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)a0 error:(out id *)a1;

- (id)init;
- (unsigned long long)hash;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
