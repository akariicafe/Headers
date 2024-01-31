@class NSString, PGTitleGenerationContext, PGGraph, NSObject;
@protocol OS_os_log;

@interface PGMeaningFeatureSummarySource : NSObject <PGFeatureSummarySourceProtocol> {
    NSObject<OS_os_log> *_loggingConnection;
    PGTitleGenerationContext *_titleGenerationContext;
    PGGraph *_graph;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)a0 titleGenerationContext:(id)a1 graph:(id)a2;
- (id)summarizedFeaturesForMomentNodes:(id)a0;

@end
