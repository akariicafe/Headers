@class NSString, PGTitleGenerationContext, PGGraph, MABinaryAdjacency, NSObject;
@protocol OS_os_log;

@interface PGBusinessLocationFeatureSummarySource : NSObject <PGFeatureSummarySourceProtocol> {
    PGGraph *_graph;
    NSObject<OS_os_log> *_loggingConnection;
    PGTitleGenerationContext *_titleGenerationContext;
    MABinaryAdjacency *_businessNodesByMomentNode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
