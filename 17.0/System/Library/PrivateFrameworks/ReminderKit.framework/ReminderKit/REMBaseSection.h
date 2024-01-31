@class REMBaseSectionStorage, NSString, REMObjectID, NSData, NSDate, REMAccountCapabilities, REMResolutionTokenMap, REMStore;

@interface REMBaseSection : NSObject <REMObjectIDProviding, REMSupportedVersionProviding>

@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (readonly, nonatomic) REMStore *store;
@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *parentID;
@property (copy, nonatomic) REMBaseSectionStorage *storage;
@property (readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (readonly, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMAccountCapabilities *accountCapabilities;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (id)valueForUndefinedKey:(id)a0;
- (BOOL)isUnsupported;
- (unsigned long long)hash;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithStore:(id)a0 accountCapabilities:(id)a1 storage:(id)a2;

@end
