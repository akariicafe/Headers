@class PHPhotoLibrary, NSObject;
@protocol OS_os_log;

@interface PGSettlingEffectHighlightProcessor : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) struct { int numberOfHighlightSummaryAssets; int numberOfEliminationsThruSettlingEffectScore; int numberOfSettlingEffectScoresRequested; } statistics;

+ (BOOL)candidate:(id)a0 passesFilteringWithStatistics:(struct { int x0; int x1; int x2; } *)a1;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)fetchHighlightCandidatesWithProgressReporter:(id)a0;
- (void)logStatistics:(struct { int x0; int x1; int x2; })a0;

@end
