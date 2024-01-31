@class NSString, NSDictionary, CKRecordID, NSData;

@interface WFCloudKitSyncFlags : NSObject <WFCloudKitItem>

@property (class, readonly, nonatomic) NSString *recordType;
@property (class, readonly, nonatomic) NSDictionary *properties;

@property (nonatomic) BOOL migratedVoiceShortcuts;
@property (nonatomic) long long defaultShortcutsVersion;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordIDWithZoneID:(id)a0;
+ (BOOL)isCloudKitSyncFlagsRecordID:(id)a0;

- (void).cxx_destruct;
- (id)initWithZoneID:(id)a0;

@end
