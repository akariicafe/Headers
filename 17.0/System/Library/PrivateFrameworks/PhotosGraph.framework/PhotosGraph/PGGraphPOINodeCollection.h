@class PGGraphMomentNodeCollection, NSString, PGGraphFeatureNodeCollection;

@interface PGGraphPOINodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)poiNodesForLabel:(id)a0 inGraph:(id)a1;
+ (id)poiNodesForLabels:(id)a0 inGraph:(id)a1;


@end
