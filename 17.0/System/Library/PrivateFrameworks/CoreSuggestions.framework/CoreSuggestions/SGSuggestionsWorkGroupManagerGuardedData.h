@class NSMapTable, NSMutableArray;

@interface SGSuggestionsWorkGroupManagerGuardedData : NSObject {
    NSMapTable *_groupLookup;
    NSMutableArray *_uniqueIds;
}

- (id)init;
- (void).cxx_destruct;
- (void)addToProcessedIds:(id)a0;
- (id)createGroupForUniqueId:(id)a0;
- (void)enterGroupForUniqueId:(id)a0;
- (id)groupForUniqueId:(id)a0;
- (BOOL)isProcessedUniqueId:(id)a0;
- (void)leaveGroupForUniqueId:(id)a0;
- (void)removeGroupFromProcessedIds:(id)a0;

@end
