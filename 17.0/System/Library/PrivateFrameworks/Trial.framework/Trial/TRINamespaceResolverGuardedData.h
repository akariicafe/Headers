@class NSDictionary, NSMutableDictionary;

@interface TRINamespaceResolverGuardedData : NSObject {
    NSDictionary *plplist;
    NSMutableDictionary *targetedRolloutDeploymentMap;
    NSMutableDictionary *targetedExperimentDeploymentMap;
    NSMutableDictionary *targetedBMLTDeploymentMap;
    BOOL hasIssuedWarnings;
}

- (void).cxx_destruct;

@end
