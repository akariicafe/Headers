@class NSDate, NSString, NSArray, WFWorkflowIcon, CKRecordID, WFWorkflowRecord, NSDictionary, WFFileRepresentation, NSData, NSNumber;

@interface WFGalleryWorkflow : NSObject <WFCloudKitItem, WFSortableGalleryObject, NSMutableCopying>

@property (class, readonly, nonatomic) NSString *recordType;
@property (class, readonly, nonatomic) NSDictionary *properties;

@property (retain, nonatomic) NSNumber *iconColor;
@property (retain, nonatomic) NSNumber *iconGlyph;
@property (retain, nonatomic) WFFileRepresentation *signedShortcutFile;
@property (copy, nonatomic) NSString *signingStatus;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSString *longDescription;
@property (readonly, nonatomic) WFWorkflowIcon *icon;
@property (readonly, nonatomic) WFWorkflowRecord *workflowRecord;
@property (readonly, nonatomic) NSNumber *searchable;
@property (readonly, nonatomic) long long minVersion;
@property (readonly, nonatomic) NSArray *hiddenRegions;
@property (readonly, nonatomic) NSArray *supportedIdioms;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) NSDate *modifiedAt;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) CKRecordID *base;
@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (readonly, nonatomic) WFFileRepresentation *shortcutFile;
@property (readonly, nonatomic) WFFileRepresentation *iconFile;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sharingURL;
- (id)ensureFileAssets;
- (unsigned long long)referenceActionForKey:(id)a0;
- (void)setCreatedAt:(id)a0 modifiedAt:(id)a1 createdBy:(id)a2;
- (id)propertiesForEventLogging;

@end
