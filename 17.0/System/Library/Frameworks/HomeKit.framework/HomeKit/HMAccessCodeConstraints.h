@class NSString, NSArray;

@interface HMAccessCodeConstraints : NSObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long allowedCharacterSets;
@property (readonly) long long minimumLength;
@property (readonly) long long maximumLength;
@property (readonly) long long maximumAllowedAccessCodes;
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
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAllowedCharacterSets:(unsigned long long)a0 minimumLength:(long long)a1 maximumLength:(long long)a2 maximumAllowedAccessCodes:(long long)a3;

@end
