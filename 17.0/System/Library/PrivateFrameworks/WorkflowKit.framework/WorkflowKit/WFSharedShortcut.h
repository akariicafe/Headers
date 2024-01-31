@class NSDate, NSString, CKRecordID, WFWorkflowIcon, NSData, WFWorkflowRecord, NSDictionary, WFFileRepresentation, NSNumber;

@interface WFSharedShortcut : NSObject <WFCloudKitItem>

@property (class, readonly, nonatomic) NSString *recordType;
@property (class, readonly, nonatomic) NSDictionary *properties;

@property (retain, nonatomic) NSNumber *iconColor;
@property (retain, nonatomic) NSNumber *iconGlyph;
@property (retain, nonatomic) WFFileRepresentation *shortcutFile;
@property (retain, nonatomic) WFFileRepresentation *signedShortcutFile;
@property (copy, nonatomic) NSString *signingStatus;
@property (retain, nonatomic) WFFileRepresentation *iconFile;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (retain, nonatomic) WFWorkflowRecord *workflowRecord;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) NSString *createdBy;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)sharingURL;
- (id)ensureFileAssets;
- (void)setCreatedAt:(id)a0 modifiedAt:(id)a1 createdBy:(id)a2;
- (id)propertiesForEventLogging;

@end
