@class PHPhotoLibrary;
@protocol PHAWorkerJobDelegate;

@interface PHAWorkerJob : NSObject <NSCopying>

@property double lastReportTimeAsInterval;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (weak, nonatomic) id<PHAWorkerJobDelegate> delegate;
@property (nonatomic) BOOL ignoreFurtherResults;
@property (nonatomic) unsigned long long countOfFailedStarts;
@property (readonly) double intervalSinceLastReport;
@property (nonatomic, setter=setIsReactionJob:) BOOL isReactionJob;
@property (nonatomic) BOOL treatMissingResultsAsFailures;
@property (readonly, nonatomic) unsigned long long scenario;
@property (readonly, nonatomic) short workerType;
@property (nonatomic) BOOL didTimeout;
@property (nonatomic) BOOL disableReactionCheck;
@property BOOL producedAssetMetadataChanges;
@property BOOL isGraphUpdateJob;
@property (readonly, nonatomic) BOOL finished;
@property (readonly, nonatomic) float completionScore;

- (id)statusAsDictionary;
- (id)init;
- (void)finish;
- (void).cxx_destruct;
- (void)prepare;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)extendTimeout;
- (float)completionScore;
- (void)extendTimeoutOrUpdateStopIfNeeded:(BOOL *)a0;
- (id)initWithWorkerType:(short)a0 scenario:(unsigned long long)a1 library:(id)a2;
- (double)intervalSinceLastReport;
- (BOOL)isEqualToWorkerJob:(id)a0;
- (BOOL)startProcessingOnWorker:(id)a0 withError:(id *)a1;
- (void)stopAcceptingResults;
- (BOOL)stopProcessingOnWorker:(id)a0 withError:(id *)a1;

@end
