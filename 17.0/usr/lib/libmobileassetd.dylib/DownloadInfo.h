@class NSDate, NSString, NSDictionary, NSURL, MADownloadOptions, NSMutableArray, NSURLSessionDownloadTask;
@protocol STExtractor;

@interface DownloadInfo : NSObject

@property (readonly, nonatomic) NSMutableArray *callbacks;
@property (readonly, nonatomic) NSURL *originalUrl;
@property (readonly, nonatomic) NSURL *cacheServerUrl;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *purpose;
@property (readonly, nonatomic) MADownloadOptions *options;
@property (readonly, nonatomic) BOOL changingConfig;
@property (readonly, nonatomic) unsigned long long backtracks;
@property (readonly, nonatomic) BOOL isStalled;
@property (readonly, nonatomic) unsigned long long numStalled;
@property (readonly, nonatomic) unsigned long long numNoLongerStalled;
@property (nonatomic) BOOL shouldRetry;
@property (retain) NSURLSessionDownloadTask *task;
@property (retain) NSString *taskDescriptor;
@property (retain) NSString *startingAt;
@property (retain) NSString *lengthOfRange;
@property (retain) id<STExtractor> extractor;
@property (retain) NSDate *date;
@property long long transferredBytesEst;
@property long long totalBytesThisSlice;
@property long long previousTotalDownloaded;
@property long long currentTotalWritten;
@property long long totalExpectedBytes;
@property long long downloadSize;
@property (readonly, nonatomic) NSMutableArray *rateHistory;
@property (retain) NSString *firstClientName;
@property BOOL isDiscretionary;
@property BOOL isAutoDownload;
@property (retain) NSString *baseUrlNoACS;
@property (retain) NSString *relativePath;
@property BOOL isPallas;
@property (retain) NSString *pallasUrl;
@property (retain) NSString *assetAudience;
@property (retain, nonatomic) NSDictionary *analyticsData;
@property (retain) NSDate *downloadStartTime;
@property (retain) NSDate *downloadFinishTime;
@property (retain) NSDate *nonDiscretionaryUpgradeTime;

- (id)initForAssetType:(id)a0 withPurpose:(id)a1 clientName:(id)a2 options:(id)a3;
- (void)updateDownloadData:(long long)a0;
- (id)_taskState;
- (BOOL)addNewRateDataPoint:(double)a0;
- (id)description;
- (void)determineDownloadUrl:(id)a0 callback:(id /* block */)a1;
- (void)addNewDownloadInfo:(id)a0;
- (id)initWithUrl:(id)a0 forAssetType:(id)a1 withPurpose:(id)a2 clientName:(id)a3 options:(id)a4;
- (void).cxx_destruct;
- (double)currentEstimate;
- (id)initWithUrl:(id)a0 clientName:(id)a1 options:(id)a2;
- (void)clearCacheServerUrl;

@end
