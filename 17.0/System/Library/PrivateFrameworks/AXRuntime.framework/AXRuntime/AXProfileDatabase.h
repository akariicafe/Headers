@class NSMutableArray;

@interface AXProfileDatabase : NSObject {
    NSMutableArray *_entries;
}

+ (id)sharedDatabase;

- (id)init;
- (void).cxx_destruct;
- (id)transactionSummary;
- (id)debugStatistics;
- (void)registerEntry:(id)a0;

@end
