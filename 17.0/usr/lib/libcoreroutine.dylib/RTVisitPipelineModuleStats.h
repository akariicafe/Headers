@class NSMutableDictionary, NSDate;

@interface RTVisitPipelineModuleStats : NSObject {
    NSMutableDictionary *_iterationDurations;
    NSMutableDictionary *_iterationLocationCounts;
    NSMutableDictionary *_iterationLocationIntervals;
    NSMutableDictionary *_iterationMaxLocationOutageIntervals;
    NSMutableDictionary *_iterationVistCount;
    NSDate *_startDate;
}

- (double)lastProcessingDuration;
- (id)init;
- (double)cumulativeProcessingDuration;
- (unsigned long long)cumulativeLocationCountForDirection:(id)a0;
- (void)stopIterationWithVisitClusters:(id)a0;
- (void)setLocationIntervalForVisitCluster:(id)a0 direction:(id)a1;
- (unsigned long long)lastLocationCountForDirection:(id)a0;
- (unsigned long long)lastVisitCountForDirection:(id)a0;
- (void)setMaxLocationOutageIntervalForVisitCluster:(id)a0 direction:(id)a1;
- (double)cumulativeLocationIntervalForDirection:(id)a0;
- (unsigned long long)maxVisitCountForDirection:(id)a0;
- (double)cumulativeMaxLocationOutageIntervalForDirection:(id)a0;
- (id)description;
- (double)lastMaxLocationOutageIntervalForDirection:(id)a0;
- (double)maxLocationIntervalForDirection:(id)a0;
- (double)maxLocationOutageIntervalForDirection:(id)a0;
- (unsigned long long)cumulativeVisitCountForDirection:(id)a0;
- (void).cxx_destruct;
- (double)lastLocationIntervalForDirection:(id)a0;
- (void)startIterationWithVisitClusters:(id)a0;
- (unsigned long long)lastLocationCount;
- (double)maxProcessingDuration;
- (void)setVisitCountForVisitCluster:(id)a0 direction:(id)a1;
- (unsigned long long)maxLocationCountForDirection:(id)a0;
- (void)setLocationCountForVisitCluster:(id)a0 direction:(id)a1;

@end
