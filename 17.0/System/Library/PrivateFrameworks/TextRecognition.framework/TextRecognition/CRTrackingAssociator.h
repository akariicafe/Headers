@interface CRTrackingAssociator : NSObject

+ (id)performAssociationOnCandidates:(id)a0 useRegionsAtOCRDispatchTime:(BOOL)a1 existingRegions:(id)a2 fineGrainedResults:(id)a3 newRegionHandler:(id /* block */)a4 matchedRegionHandler:(id /* block */)a5;
+ (id)performAssociationOnCandidates:(id)a0 useRegionsAtOCRDispatchTime:(BOOL)a1 existingRegions:(id)a2 newRegionHandler:(id /* block */)a3 matchedRegionHandler:(id /* block */)a4;

@end
