@class VIObjectCategory, NSString, VIOntologyNode, VIThirdPartyObject, VIObjectKnowledge;

@interface VIRegionOfInterestResultItem : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) VIObjectCategory *objectCategory;
@property (readonly, nonatomic) VIOntologyNode *ontologyNode;
@property (readonly, nonatomic) VIObjectKnowledge *objectKnowledge;
@property (readonly, nonatomic) VIThirdPartyObject *thirdPartyObject;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDomain:(id)a0 thirdPartyObject:(id)a1 ontologyNode:(id)a2 objectKnowledge:(id)a3;

@end
