@class NSUUID, NSString, HMCHIPEcosystem, NSArray, NSNumber;

@interface HMCHIPHome : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSNumber *identifier;
@property (readonly, copy) NSNumber *index;
@property (readonly, copy) NSString *name;
@property (readonly, copy) HMCHIPEcosystem *ecosystem;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 index:(id)a1 name:(id)a2 ecosystem:(id)a3;
- (id)initWithIdentifier:(id)a0 name:(id)a1 ecosystem:(id)a2;

@end
