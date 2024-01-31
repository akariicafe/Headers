@class NSArray, NSString;

@interface SAAndCondition : AceObject <SASupportCondition>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *conditions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)andConditionWithDictionary:(id)a0 context:(id)a1;
+ (id)andCondition;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
