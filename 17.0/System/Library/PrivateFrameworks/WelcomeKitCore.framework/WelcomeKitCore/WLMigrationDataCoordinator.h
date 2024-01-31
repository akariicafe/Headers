@class NSString;

@interface WLMigrationDataCoordinator : NSObject {
    BOOL _doneSent;
}

@property (copy, nonatomic) NSString *downloadsPath;
@property (nonatomic) BOOL stashDataLocally;

+ (BOOL)_allowSegmentedDownloads;
+ (unsigned long long)downloadSegmentSize;
+ (unsigned long long)segmentCountForItemSize:(unsigned long long)a0 segmentSize:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_downloadFileInMultipleSegmentsFromSource:(id)a0 forMigrator:(id)a1 summary:(id)a2 account:(id)a3 itemSize:(unsigned long long)a4 segmentCompletion:(id /* block */)a5 completion:(id /* block */)a6;
- (void)_downloadSegmentsFromSource:(id)a0 forMigrator:(id)a1 startingAtByteLocation:(unsigned long long)a2 ofSummary:(id)a3 account:(id)a4 itemSize:(unsigned long long)a5 toFileHandle:(id)a6 segmentCompletion:(id /* block */)a7 completion:(id /* block */)a8;
- (void)_fetchAccountsFromSource:(id)a0 forMigrator:(id)a1 statistics:(id)a2 completion:(id /* block */)a3;
- (void)_fetchSummariesFromSource:(id)a0 forMigrator:(id)a1 account:(id)a2 statistics:(id)a3 completion:(id /* block */)a4;
- (id)_recordSummaryForMigrator:(id)a0 withInfo:(id)a1 account:(id)a2;
- (void)downloadDataFromSource:(id)a0 forMigrator:(id)a1 summary:(id)a2 account:(id)a3 completion:(id /* block */)a4;
- (void)downloadFileFromSource:(id)a0 forMigrator:(id)a1 summary:(id)a2 account:(id)a3 segmentCompletion:(id /* block */)a4 completion:(id /* block */)a5;
- (void)fetchAccountsAndSummariesFromSource:(id)a0 forMigrator:(id)a1 statistics:(id)a2 accountsRequestDurationBlock:(id /* block */)a3 summariesRequestDurationBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (void)importDataForMigrator:(id)a0 fromProvider:(id /* block */)a1 forSummaries:(id)a2 summaryStart:(id /* block */)a3 summaryCompletion:(id /* block */)a4;
- (void)updateSource:(id)a0 withProgress:(double)a1 remainingTime:(double)a2 completion:(id /* block */)a3;

@end
