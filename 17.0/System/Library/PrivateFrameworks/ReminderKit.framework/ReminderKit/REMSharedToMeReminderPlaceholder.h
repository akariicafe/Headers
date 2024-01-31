@class NSArray, NSString, REMObjectID;

@interface REMSharedToMeReminderPlaceholder : NSObject <REMDAChangeTrackableModel, _REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding>

@property (class, readonly, nonatomic) BOOL rem_DA_supportsFetching;
@property (class, readonly, nonatomic) BOOL rem_DA_supportsConcealedObjects;
@property (class, readonly, nonatomic) NSArray *rem_DA_propertiesAffectingIsConcealed;
@property (class, readonly, nonatomic) id /* block */ rem_DA_fetchByObjectIDBlock;
@property (class, readonly, nonatomic) id /* block */ rem_DA_fetchByObjectIDsBlock;
@property (class, readonly, nonatomic) id /* block */ rem_DA_deletedKeyFromTombstoneBlock;
@property (class, readonly, nonatomic) id /* block */ rem_DA_deletedKeyFromConcealedModelObjectBlock;
@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *remObjectID;

+ (BOOL)isChangeTrackableModel;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)objectIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjectID:(id)a0 accountID:(id)a1;
- (BOOL)isEqualToSharedToMeReminderPlaceholder:(id)a0;

@end
