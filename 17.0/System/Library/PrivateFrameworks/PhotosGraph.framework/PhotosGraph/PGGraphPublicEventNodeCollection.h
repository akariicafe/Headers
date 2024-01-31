@class PGGraphMomentNodeCollection, NSSet, PGGraphPublicEventCategoryNodeCollection, PGGraphPerformerNodeCollection, PGGraphBusinessNodeCollection, PGGraphFeatureNodeCollection, NSString;

@interface PGGraphPublicEventNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphPublicEventCategoryNodeCollection *categoryNodes;
@property (readonly, nonatomic) PGGraphPerformerNodeCollection *performerNodes;
@property (readonly, nonatomic) PGGraphBusinessNodeCollection *businessNodes;
@property (readonly, nonatomic) NSSet *eventNames;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)publicEventNodesWithCategories:(id)a0 inGraph:(id)a1;


@end
