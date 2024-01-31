@class NSString, ENSecureArchiveFileWrapper, ENRegionHistory, NSObject;
@protocol OS_dispatch_queue, ENRegionHistoryManagerDelegate;

@interface ENRegionHistoryManager : NSObject

@property (copy, nonatomic) NSString *directoryPath;
@property (retain, nonatomic) ENSecureArchiveFileWrapper *regionHistoryFileWrapper;
@property (retain, nonatomic) ENRegionHistory *regionHistory;
@property (nonatomic) int resetToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<ENRegionHistoryManagerDelegate> delegate;
@property (nonatomic) long long fileStatus;

+ (id)regionHistoryFileStatusToString:(long long)a0;

- (BOOL)purgeAllRegionHistoryWithError:(id *)a0;
- (BOOL)purgeRegionsOlderThanDate:(id)a0 error:(id *)a1;
- (void)addRegionVisit:(id)a0;
- (id)getAllRegions;
- (void)dealloc;
- (void)updateFileStatus;
- (id)mergeRegionHistoryOnDisk:(id)a0 inMemory:(id)a1;
- (void)resetRegionHistory;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1 directoryPath:(id)a2;
- (id)getAllRegionVisits;
- (void)setupPersistedRegionHistory;

@end
