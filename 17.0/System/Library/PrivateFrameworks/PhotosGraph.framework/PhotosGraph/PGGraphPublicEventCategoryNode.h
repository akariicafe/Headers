@class MARelation, NSString, PGGraphPublicEventCategoryNodeCollection, NSArray;

@interface PGGraphPublicEventCategoryNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport> {
    NSString *_label;
}

@property (class, readonly, nonatomic) MARelation *publicEventOfCategory;

@property (readonly, nonatomic) PGGraphPublicEventCategoryNodeCollection *collection;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *localizedSynonyms;

+ (id)filter;
+ (id)filterWithCategories:(id)a0;
+ (id)filterWithCategory:(id)a0;

- (id)label;
- (id)propertyDictionary;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)associatedNodesForRemoval;
- (id)initWithLabel:(id)a0 localizedName:(id)a1;

@end
