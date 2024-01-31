@class NSString, PGGraphHighlightNode, PGHighlightTailorContext, PGGraph, NSObject;
@protocol OS_os_log;

@interface PGDayHighlightFeatureSummaryGenerator : NSObject <PGFeatureSummaryGeneratorProtocol> {
    PGGraphHighlightNode *_highlightNode;
    NSObject<OS_os_log> *_loggingConnection;
    PGHighlightTailorContext *_highlightTailorContext;
    PGGraph *_graph;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)durationFromDateIntervals:(id)a0;
- (id)initWithHighlightNode:(id)a0 loggingConnection:(id)a1 highlightTailorContext:(id)a2 graph:(id)a3;
- (unsigned long long)locationGranularityScoreForSummarizedFeatureSubtype:(unsigned short)a0;
- (id)sortedSummarizedFeaturesForMomentNodes:(id)a0;

@end
