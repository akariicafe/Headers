@class NSSet, PGGraphPublicEventNodeCollection;

@interface PGGraphPublicEventCategoryNodeCollection : PGGraphNodeCollection

@property (readonly) NSSet *categories;
@property (readonly, nonatomic) PGGraphPublicEventNodeCollection *publicEventNodes;

+ (Class)nodeClass;
+ (id)publicEventCategoryNodesForCategories:(id)a0 inGraph:(id)a1;
+ (id)publicEventCategoryNodesForCategory:(id)a0 inGraph:(id)a1;

@end
