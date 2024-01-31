@class NSString, RTLocation, RTVisitHyperParameter, RTVisit;

@interface RTVisitPipelineModuleSpeedCluster : NSObject <RTVisitPipelineModule> {
    RTVisit *_workingVisit;
    RTLocation *_lastPoint;
    RTVisitHyperParameter *_hyperParameter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)clearAndAddForcedExitSignalToClusters:(id)a0;
- (id)initWithHyperParameter:(id)a0;
- (void)clearWorkingVisit;
- (void).cxx_destruct;
- (id)process:(id)a0;

@end
