@class NSString, NSDictionary, NSArray, NSEntityDescription;

@interface HMDEntityCodingDescription : NSObject {
    NSEntityDescription *_entity;
    NSString *_typeID;
    NSString *_refContextCodingKey;
    NSString *_refContextKeyPath;
    NSEntityDescription *_refContextEntity;
    NSDictionary *_keyAttributesByCodingKey;
    NSDictionary *_attributesByCodingKey;
    NSDictionary *_attributeCodingKeysByPropertyName;
    NSDictionary *_relationshipsByCodingKey;
    NSDictionary *_relationshipCodingKeysByPropertyName;
    NSDictionary *_concreteSubentitiesByTypeID;
}

@property (readonly) NSEntityDescription *entity;
@property (readonly) NSString *name;
@property (readonly) NSString *typeID;
@property (readonly) BOOL hasConcreteSubentities;
@property (readonly) NSString *refContextCodingKey;
@property (readonly) NSString *refContextKeyPath;
@property (readonly) NSEntityDescription *refContextEntity;
@property (readonly) NSDictionary *keyAttributesByCodingKey;
@property (readonly) NSDictionary *attributesByCodingKey;
@property (readonly) NSDictionary *relationshipsByCodingKey;
@property (readonly) NSDictionary *concreteSubentitiesByTypeID;
@property (readonly) NSArray *parentRelationships;

- (void).cxx_destruct;
- (id)descriptionForAttribute:(id)a0;
- (id)descriptionForRelationship:(id)a0;

@end
