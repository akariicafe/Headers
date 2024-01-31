@class CNContactStore, NSUUID, NSString, NSSet, ASRelationship;

@interface ASContact : NSObject <NSCopying> {
    CNContactStore *_contactStore;
}

@property (readonly, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *linkedContactStoreIdentifier;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSSet *destinations;
@property (copy, nonatomic) ASRelationship *relationship;
@property (copy, nonatomic) ASRelationship *remoteRelationship;
@property (readonly, copy, nonatomic) NSString *primaryDestinationForMessaging;
@property (readonly, nonatomic) unsigned long long cloudType;

+ (id)contactWithCodableContact:(id)a0;

- (id)init;
- (void)setContactStore:(id)a0;
- (BOOL)isEqualToContact:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)contactStore;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_bestDestinationForContact:(id)a0;
- (id)_bestDestinationFromKnownDestinations;
- (id)codableContactIncludingCloudKitFields:(BOOL)a0;
- (id)contactWithKeys:(id)a0;

@end
