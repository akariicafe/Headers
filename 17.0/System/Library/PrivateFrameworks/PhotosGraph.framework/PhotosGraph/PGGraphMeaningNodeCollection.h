@class PGGraphMomentNodeCollection, PGGraphFeatureNodeCollection, PGGraphMeaningEdgeCollection, NSString;

@interface PGGraphMeaningNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphMeaningNodeCollection *childMeaningNodes;
@property (readonly, nonatomic) PGGraphMeaningNodeCollection *parentMeaningNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphMeaningEdgeCollection *reliableMeaningEdges;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)meaningNodesWithMeaning:(unsigned long long)a0 inGraph:(id)a1;
+ (id)meaningNodesWithMeaningLabels:(id)a0 inGraph:(id)a1;

- (id)meaningLabels;

@end
