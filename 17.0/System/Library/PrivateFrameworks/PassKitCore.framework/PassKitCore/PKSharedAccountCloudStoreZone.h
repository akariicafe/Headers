@class NSString, NSSet;

@interface PKSharedAccountCloudStoreZone : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *zoneName;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) unsigned long long accountType;
@property (nonatomic) unsigned long long access;
@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSString *originatorAltDSID;
@property (copy, nonatomic) NSSet *sharedUsersAltDSIDs;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)zoneType;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToSharedAccountCloudStoreZone:(id)a0;

@end
