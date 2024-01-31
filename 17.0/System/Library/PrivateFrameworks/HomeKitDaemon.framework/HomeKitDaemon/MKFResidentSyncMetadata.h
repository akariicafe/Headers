@class NSString, NSPersistentHistoryToken, _MKFHome, NSDate;

@interface MKFResidentSyncMetadata : _MKFObject

@property (retain, nonatomic) NSPersistentHistoryToken *lastSeenToken;
@property (copy, nonatomic) NSString *lastSyncChecksum;
@property (copy, nonatomic) NSDate *lastSyncTimestamp;
@property (retain, nonatomic) NSPersistentHistoryToken *lastSyncToken;
@property (retain, nonatomic) _MKFHome *home;

+ (id)fetchRequest;

- (BOOL)validateForInsertOrUpdate:(id *)a0;

@end
