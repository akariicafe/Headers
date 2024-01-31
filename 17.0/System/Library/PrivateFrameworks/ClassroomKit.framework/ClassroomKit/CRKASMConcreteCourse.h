@class NSArray, NSSet, NSString, CRKASMCertificateVendor, DMFControlGroupIdentifier, NSDate, CRKASMIdentityVendor;
@protocol CRKIdentity, CRKASMLocation;

@interface CRKASMConcreteCourse : NSObject <CRKASMCourse>

@property (readonly, nonatomic) CRKASMIdentityVendor *identityVendor;
@property (readonly, nonatomic) CRKASMCertificateVendor *certificateVendor;
@property (readonly, copy, nonatomic) NSSet *trustedUserIdentifiers;
@property (readonly, copy, nonatomic) NSString *backingClassObjectID;
@property (readonly, copy, nonatomic) DMFControlGroupIdentifier *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long mascot;
@property (readonly, nonatomic) unsigned long long color;
@property (readonly, nonatomic) id<CRKASMLocation> location;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic) id<CRKIdentity> identity;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSArray *users;
@property (readonly, copy, nonatomic) NSArray *trustedUsers;
@property (readonly, copy, nonatomic) NSSet *allTrustedUserCertificates;

+ (id)courseNameForClass:(id)a0;
+ (id)trustedUserIdentifierForTrustedUsers:(id)a0;
+ (id)trustedUsersFromPersons:(id)a0 environment:(id)a1;
+ (id)usersFromPersons:(id)a0 environment:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBackingClass:(id)a0 location:(id)a1 persons:(id)a2 trustedPersons:(id)a3 identityVendor:(id)a4 manageableLocationIDs:(id)a5 environment:(id)a6;

@end
