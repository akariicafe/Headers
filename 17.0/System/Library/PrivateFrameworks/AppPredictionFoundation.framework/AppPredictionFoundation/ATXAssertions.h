@interface ATXAssertions : NSObject

+ (void)assert:(BOOL)a0 conditionName:(id)a1;
+ (void)assert:(BOOL)a0 conditionName:(id)a1 withDescriptionString:(id)a2;
+ (void)parameterAssert:(id)a0 parameterName:(id)a1;
+ (void)parameterAssert:(id)a0 parameterName:(id)a1 descriptionString:(id)a2;

@end
