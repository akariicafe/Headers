@class NSString, NSUUID, NSArray, HMRemovedUserInfo;

@interface HMAccessCodeUserInformationValue : NSObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *simpleLabel;
@property (readonly, copy) NSUUID *labelIdentifier;
@property (readonly, copy) NSUUID *userUUID;
@property (readonly, copy) HMRemovedUserInfo *removedUserInfo;
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
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSimpleLabel:(id)a0 labelIdentifier:(id)a1 userUUID:(id)a2 removedUserInfo:(id)a3;

@end
