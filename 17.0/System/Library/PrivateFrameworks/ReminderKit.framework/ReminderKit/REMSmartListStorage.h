@class NSUUID, NSString, NSArray, REMObjectID, NSDate, REMAccountCapabilities, REMMemberships, NSSet, REMColor, NSData, REMResolutionTokenMap, REMManualOrdering;

@interface REMSmartListStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMObjectStorageSupportedVersionProviding> {
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    long long minimumSupportedVersion;
    long long effectiveMinimumSupportedVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMAccountCapabilities *accountCapabilities;
@property (retain, nonatomic) REMObjectID *objectID;
@property (copy, nonatomic) NSString *smartListType;
@property (retain, nonatomic) REMManualOrdering *manualOrdering;
@property (copy, nonatomic) NSString *sortingStyle;
@property (copy, nonatomic) NSDate *pinnedDate;
@property (retain, nonatomic) NSUUID *mostRecentTargetTemplateIdentifier;
@property (nonatomic) BOOL shouldUpdateSectionsOrdering;
@property (retain, nonatomic) NSArray *unsavedSectionIDsOrdering;
@property (retain, nonatomic) REMMemberships *unsavedMembershipsOfRemindersInSections;
@property (retain, nonatomic) NSSet *sectionIDsToUndelete;
@property (nonatomic) BOOL showingLargeAttachments;
@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *parentAccountID;
@property (retain, nonatomic) REMObjectID *parentListID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REMColor *color;
@property (retain, nonatomic) NSString *badgeEmblem;
@property (retain, nonatomic) NSData *filterData;
@property (nonatomic) BOOL isPersisted;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;
- (unsigned long long)storeGeneration;
- (BOOL)isUnsupported;
- (id)optionalObjectID;
- (id)cdKeyToStorageKeyMap;
- (void)setEffectiveMinimumSupportedVersion:(long long)a0;
- (void)setMinimumSupportedVersion:(long long)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 smartListType:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
