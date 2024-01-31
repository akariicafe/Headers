@class PPNamedEntity, NSString, MARelation, PGGraphBusinessNode, NSSet, PGGraphPublicEventNodeCollection;

@interface PGGraphPublicEventNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity, PGAssetCollectionFeature>

@property (class, readonly, nonatomic) MARelation *momentOfPublicEvent;
@property (class, readonly, nonatomic) MARelation *categoryOfPublicEvent;
@property (class, readonly, nonatomic) MARelation *performerOfPublicEvent;
@property (class, readonly, nonatomic) MARelation *businessOfPublicEvent;

@property (readonly, nonatomic) PPNamedEntity *pg_namedEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) PGGraphBusinessNode *businessNode;
@property (readonly, nonatomic) NSSet *categories;
@property (readonly, nonatomic) NSSet *localizedCategories;
@property (readonly, nonatomic) NSSet *preciseLocalizedCategoryNames;
@property (readonly, nonatomic) PGGraphPublicEventNodeCollection *collection;
@property (readonly, copy, nonatomic) NSSet *performers;
@property (readonly, nonatomic) long long expectedAttendance;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)unsupportedCategoriesForTitles;

- (id)label;
- (id)propertyDictionary;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)associatedNodesForRemoval;
- (void)enumerateLocalizedSubcategoryNodesUsingBlock:(id /* block */)a0;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePerformerEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePerformerNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePublicEventCategoryEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePublicEventCategoryNodesUsingBlock:(id /* block */)a0;
- (id)initWithMUID:(unsigned long long)a0 name:(id)a1 expectedAttendance:(long long)a2;
- (id)keywordDescription;

@end
