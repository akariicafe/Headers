@class NSString, NSData;

@interface WFLibraryRecord : WFRecord

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSData *data;
@property (nonatomic) long long lastSyncedHash;
@property (copy, nonatomic) NSData *cloudKitRecordMetadata;

- (void).cxx_destruct;

@end
