@class CNChangeHistoryAnchor;

@interface ContactFolderItemsSyncContext : NSObject

@property (nonatomic) int abPersonChangeId;
@property (nonatomic) int abGroupChangeId;
@property (nonatomic, getter=isChangeHistoryTruncated) BOOL changeHistoryTruncated;
@property (nonatomic) unsigned long long latestSequenceNumber;
@property (retain, nonatomic) CNChangeHistoryAnchor *cnChangeAnchor;

- (id)init;
- (void).cxx_destruct;

@end
