@class NSArray, NSMutableDictionary, NSURL, NSDictionary;

@interface PPSValueConverter : NSObject {
    NSURL *_filepath;
    NSArray *_sortedTimelineIntervals;
    NSDictionary *_selectedHistory;
}

@property (retain) NSArray *metrics;
@property (retain) NSMutableDictionary *timeline;

- (void).cxx_destruct;
- (BOOL)_isInitialized;
- (id)_category;
- (id)_subsystem;
- (id)_latestInterval;
- (BOOL)_allowConversionFromMetric:(id)a0 toMetric:(id)a1;
- (id)_convertEvent:(id)a0;
- (id)_convertValue:(id)a0 atTimestamp:(double)a1 usingMetric:(id)a2;
- (id)_latestHistory;
- (id)_latestMetricForMetricName:(id)a0;
- (void)_performGeneration;
- (BOOL)_shouldConvertAtTimestamp:(double)a0;
- (BOOL)_shouldConvertEvent:(id)a0;
- (id)_sourceMetricForMetricName:(id)a0;
- (id)convertEventIfNecessary:(id)a0;
- (id)convertValueIfNeccesary:(id)a0 atTimestamp:(double)a1 usingMetric:(id)a2;
- (id)initWithFilepath:(id)a0 andMetrics:(id)a1;

@end
