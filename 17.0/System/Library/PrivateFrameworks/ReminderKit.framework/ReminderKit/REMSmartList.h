@class REMResolutionTokenMap, REMStore, REMList, NSDate, REMAccount, REMSmartListStorage, REMSmartListSectionContext, REMColor, REMSmartListCustomContext, NSString, NSSet, NSData, REMObjectID, REMAccountCapabilities, NSUUID;

@interface REMSmartList : NSObject <REMObjectIDProviding, REMSupportedVersionProviding>

@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMAccount *account;
@property (retain, nonatomic) REMList *parentList;
@property (copy, nonatomic) REMSmartListStorage *storage;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *parentAccountID;
@property (readonly, nonatomic) REMObjectID *parentListID;
@property (readonly, nonatomic) NSDate *pinnedDate;
@property (readonly, nonatomic) NSUUID *mostRecentTargetTemplateIdentifier;
@property (readonly, nonatomic) BOOL isOriginOfExistingTemplate;
@property (readonly, nonatomic) NSSet *sectionIDsToUndelete;
@property (readonly, nonatomic) REMSmartListSectionContext *sectionContext;
@property (readonly, nonatomic) REMAccountCapabilities *accountCapabilities;
@property (readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (readonly, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) REMColor *color;
@property (readonly, nonatomic) NSString *badgeEmblem;
@property (readonly, nonatomic) BOOL isPinned;
@property (readonly, nonatomic) NSData *filterData;
@property (readonly, nonatomic) BOOL showingLargeAttachments;
@property (nonatomic) BOOL isPersisted;
@property (readonly, nonatomic) REMStore *store;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (copy, nonatomic) NSString *smartListType;
@property (readonly, nonatomic) REMSmartListCustomContext *customContext;
@property (readonly, nonatomic) NSString *sortingStyle;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (id)valueForUndefinedKey:(id)a0;
- (id)remObjectID;
- (BOOL)isUnsupported;
- (id)optionalObjectID;
- (unsigned long long)hash;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithStore:(id)a0 storage:(id)a1;
- (id)initWithStore:(id)a0 account:(id)a1 parentList:(id)a2 storage:(id)a3;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
