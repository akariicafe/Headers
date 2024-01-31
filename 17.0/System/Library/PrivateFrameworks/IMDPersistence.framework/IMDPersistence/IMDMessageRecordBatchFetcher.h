@class NSString;

@interface IMDMessageRecordBatchFetcher : IMDRecordBatchFetcher

@property (readonly, copy, nonatomic) NSString *associatedChatGUID;
@property (readonly, nonatomic) BOOL sortAscending;

- (id)init;
- (void).cxx_destruct;
- (id)_rowIDPredicate;
- (id)initWithAssociatedChatGUID:(id)a0;
- (id)initWithAssociatedChatGUID:(id)a0 sortAscending:(BOOL)a1;
- (id)nextBatchWithSize:(unsigned long long)a0;

@end
