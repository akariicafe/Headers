@class NSString, CKServerChangeToken, NSData, NSDate, NSOrderedSet;

@interface WFCloudKitSyncToken : WFRecord

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *account;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSData *serverChangeTokenData;
@property (copy, nonatomic) NSData *lastOrderingData;
@property (copy, nonatomic) NSData *lastOrderingCloudKitRecordMetadata;
@property (copy, nonatomic) NSData *syncEngineMetadata;
@property (copy, nonatomic) NSData *syncFlagsCloudKitRecordMetadata;
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (copy, nonatomic) NSOrderedSet *lastOrdering;

+ (id)defaultIdentifier;
+ (id)defaultDate;
+ (id)accountForContainerEnvironmentString:(id)a0 userRecordID:(id)a1;
+ (id)ignoredPropertyNames;

- (void).cxx_destruct;
- (id)newTokenWithCopiedPayload;

@end
