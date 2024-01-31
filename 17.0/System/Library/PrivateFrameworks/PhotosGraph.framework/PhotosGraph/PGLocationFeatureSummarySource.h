@class PGGraphLocationCityNodeCollection, NSString, PGTitleGenerationContext, PGGraph, NSObject;
@protocol OS_os_log;

@interface PGLocationFeatureSummarySource : NSObject <PGFeatureSummarySourceProtocol> {
    NSObject<OS_os_log> *_loggingConnection;
    PGTitleGenerationContext *_titleGenerationContext;
    PGGraph *_graph;
    PGGraphLocationCityNodeCollection *_supersetCityNodes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)a0 titleGenerationContext:(id)a1 graph:(id)a2;
- (id)summarizedAreaNodesForMomentNode:(id)a0 momentAddressNodesAsSet:(id)a1;
- (id)summarizedCityOrCountyNodesForMomentNode:(id)a0 momentAddressNodesAsSet:(id)a1;
- (id)summarizedDistrictNodesForMomentNode:(id)a0 momentAddressNodes:(id)a1 momentCityNodes:(id)a2;
- (id)summarizedFeaturesForMomentNodes:(id)a0;
- (id)summarizedHomeWorkNodesForMomentNode:(id)a0 momentAddressNodes:(id)a1;

@end
