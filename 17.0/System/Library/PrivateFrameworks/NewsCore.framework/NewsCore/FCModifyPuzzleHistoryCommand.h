@interface FCModifyPuzzleHistoryCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;
- (id)initWithPuzzleHistoryItems:(id)a0 merge:(BOOL)a1;

@end
