@class SAHAEntity, NSString, NSArray, SAHAAttributeValue;

@interface SAHAActionResult : SADomainObject

@property (retain, nonatomic) SAHAEntity *entity;
@property (copy, nonatomic) NSString *outcome;
@property (copy, nonatomic) NSArray *relatedEntityIds;
@property (copy, nonatomic) NSString *requestActionId;
@property (copy, nonatomic) NSString *resultAttribute;
@property (retain, nonatomic) SAHAAttributeValue *resultValue;

+ (id)actionResultWithDictionary:(id)a0 context:(id)a1;
+ (id)actionResult;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
