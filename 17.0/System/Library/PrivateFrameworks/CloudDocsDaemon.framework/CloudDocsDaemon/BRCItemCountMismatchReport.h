@class BRMangledID, BRCItemGlobalID, NSError, NSURL;

@interface BRCItemCountMismatchReport : NSObject {
    long long _failureRetryCount;
    NSURL *_fileURL;
    BOOL _containsSharedToMeItem;
}

@property (readonly, nonatomic) long long itemCountDifference;
@property (readonly, nonatomic) BOOL wasAbleToRun;
@property (readonly, nonatomic) NSError *lastError;
@property (readonly, nonatomic) BRCItemGlobalID *itemGlobalID;
@property (readonly, nonatomic) BRMangledID *zoneMangledID;

+ (void)_finishReport:(id)a0 session:(id)a1 completionHandler:(id /* block */)a2;
+ (void)generateReportForSharedFolder:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)incrementErrorRetryCountWithSession:(id)a0;
- (void)shareChangedDuringCheckWithSession:(id)a0;
- (id)telemetryEvent;

@end
