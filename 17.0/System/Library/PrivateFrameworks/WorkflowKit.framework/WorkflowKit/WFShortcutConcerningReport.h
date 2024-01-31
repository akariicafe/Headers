@class NSString, NSDictionary, CKRecordID, WFFileRepresentation, NSData;

@interface WFShortcutConcerningReport : NSObject <WFCloudKitItem>

@property (class, readonly, nonatomic) NSString *recordType;
@property (class, readonly, nonatomic) NSDictionary *properties;

@property (copy, nonatomic) NSString *reportReason;
@property (copy, nonatomic) NSString *reportMessage;
@property (copy, nonatomic) CKRecordID *shortcut;
@property (retain, nonatomic) WFFileRepresentation *shortcutContent;
@property (copy, nonatomic) NSString *status;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithReason:(id)a0 shortcutContent:(id)a1;

@end
