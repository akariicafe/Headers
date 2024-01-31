@class PGGraphPersonRelationshipTagNodeCollection, PGGraphPersonNodeCollection;

@interface PGGraphRelationshipTagEdgeCollection : PGGraphEdgeCollection

@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property (readonly, nonatomic) PGGraphPersonRelationshipTagNodeCollection *tagNodes;

+ (Class)edgeClass;

@end
