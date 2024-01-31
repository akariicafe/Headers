@class PGGraphMomentNodeCollection, NSSet, PGGraphFeatureNodeCollection, NSString, PGGraphPersonNodeCollection;

@interface PGGraphPetNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *ownerNodes;
@property (readonly, nonatomic) NSSet *localIdentifiers;
@property (readonly, nonatomic) NSSet *uuids;
@property (readonly, nonatomic) NSSet *names;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)petNodesForLocalIdentifier:(id)a0 inGraph:(id)a1;
+ (id)petNodesForLocalIdentifiers:(id)a0 inGraph:(id)a1;
+ (id)petNodesForSpecies:(unsigned long long)a0 inGraph:(id)a1;


@end
