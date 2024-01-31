@interface TIKeyboardKeyBehaviors : NSObject

@property (nonatomic) unsigned long long spaceKeyBehavior;
@property (nonatomic) unsigned long long returnKeyBehavior;
@property (nonatomic) unsigned long long tabKeyBehavior;

+ (id)behaviorForSpaceKey:(unsigned long long)a0 forReturnKey:(unsigned long long)a1;
+ (id)behaviorForSpaceKey:(unsigned long long)a0 forReturnKey:(unsigned long long)a1 forTabKey:(unsigned long long)a2;

- (id)initWithSpaceKeyBehavior:(unsigned long long)a0 returnKeyBehavior:(unsigned long long)a1 tabKeyBehavior:(unsigned long long)a2;

@end
