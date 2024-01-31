@class NSArray, NSString, NSDate;

@interface PKSharedAccountCloudStore : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *sharedAccountCloudStoreZones;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (nonatomic, getter=isDirty) BOOL dirty;
@property (copy, nonatomic) NSString *accountIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allPossibleZonesForAccountUser:(id)a0 access:(unsigned long long)a1;
- (id)initWithArray:(id)a0 lastUpdated:(id)a1;
- (BOOL)isEqualToSharedAccountCloudStore:(id)a0;
- (id)primaryZoneForAccountUser:(id)a0 access:(unsigned long long)a1;
- (id)sharedAccountCloudStoreZonesWithAccess:(unsigned long long)a0;
- (id)sharedAccountCloudStoreZonesWithAccess:(unsigned long long)a0 forAccountUser:(id)a1;
- (id)sharedAccountZoneWithName:(id)a0 access:(unsigned long long)a1;

@end
