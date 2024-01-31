@class MARelation, NSString, NSArray, MANodeFilter, PGGraphPersonRelationshipTagNodeCollection;

@interface PGGraphPersonRelationshipTagNode : PGGraphPropertylessNode <MAUniquelyIdentifiableNode, PGGraphLocalizable, PGGraphSynonymSupport>

@property (class, readonly) MARelation *personWithTag;

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) PGGraphPersonRelationshipTagNodeCollection *collection;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *localizedSynonyms;

+ (id)filter;
+ (id)filterWithTag:(unsigned long long)a0;
+ (id)labelForRelationshipTag:(unsigned long long)a0;
+ (id)personWithTagWithConfidence:(double)a0;
+ (unsigned long long)relationshipTagFromString:(id)a0;
+ (id)supportedTagsAsStrings;

- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)_localizationKeyForRelationshipTagLabel:(id)a0;
- (id)initWithPersonRelationshipTag:(unsigned long long)a0;

@end
