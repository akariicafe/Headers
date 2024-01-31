@interface FCModifyIssueHistoryCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)recordZoneName;
- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;
- (id)initWithIssueHistoryItems:(id)a0 merge:(BOOL)a1;

@end
