@class PGHolidayDateFeatureSummarySource, PGPublicEventFeatureSummarySource, PGTitleGenerationContext, PGLocationFeatureSummarySource, PHPhotoLibrary, PGBusinessLocationFeatureSummarySource, NSObject, PGMeaningFeatureSummarySource, PGNeighborScoreComputer, PGGraph, CLSCurationContext;
@protocol OS_os_log;

@interface PGHighlightTailorContext : NSObject {
    PGGraph *_graph;
}

@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PGNeighborScoreComputer *neighborScoreComputer;
@property (readonly) CLSCurationContext *curationContext;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) PGTitleGenerationContext *titleGenerationContext;
@property (readonly) double topTierAestheticScore;
@property (readonly, nonatomic) PGLocationFeatureSummarySource *locationFeatureSummarySource;
@property (readonly, nonatomic) PGMeaningFeatureSummarySource *meaningFeatureSummarySource;
@property (readonly, nonatomic) PGBusinessLocationFeatureSummarySource *businessFeatureSummarySource;
@property (readonly, nonatomic) PGPublicEventFeatureSummarySource *publicEventFeatureSummarySource;
@property (readonly, nonatomic) PGHolidayDateFeatureSummarySource *holidayDateFeatureSummarySource;

- (id)initForTesting;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 graph:(id)a1 loggingConnection:(id)a2;

@end
