@class NSString, NSUUID;

@interface HMMediaSystemData : HMMediaGroup <HMEProtoBufferCoding, NSSecureCoding>

@property (class, readonly, copy) NSString *codingKey;
@property (class, readonly, copy) NSString *defaultGroupName;
@property (class, readonly, copy) NSString *roomNameSentinel;
@property (class, readonly, copy) NSUUID *unknownDestinationSentinel;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSUUID *leftDestinationIdentifier;
@property (copy) NSUUID *rightDestinationIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)destinationUniqueIdentifiers;
- (id)encodeToProtoBufferData;
- (BOOL)hasRoleIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 parentIdentifier:(id)a1 name:(id)a2 defaultName:(BOOL)a3 associatedGroupIdentifier:(id)a4 leftDestinationIdentifier:(id)a5 rightDestinationIdentifier:(id)a6;
- (id)initWithProtoBufferData:(id)a0;

@end
