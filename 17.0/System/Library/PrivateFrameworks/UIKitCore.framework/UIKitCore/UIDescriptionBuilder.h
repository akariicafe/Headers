@class NSString, NSMutableString, NSObject;

@interface UIDescriptionBuilder : NSObject

@property (nonatomic) NSObject *object;
@property (retain, nonatomic) NSMutableString *descriptionString;
@property (copy, nonatomic) NSString *separator;
@property (readonly, nonatomic) NSString *string;

+ (id)descriptionBuilderWithObject:(id)a0;
+ (id)descriptionForObject:(id)a0 keys:(id)a1;
+ (id)descriptionForObject:(id)a0 namesAndObjects:(id)a1;

- (id)initWithObject:(id)a0;
- (id)appendName:(id)a0 doubleValue:(double)a1;
- (id)appendKey:(id)a0;
- (id)appendName:(id)a0 selector:(SEL)a1;
- (id)appendKeys:(id)a0;
- (id)appendName:(id)a0 intValue:(int)a1;
- (id)appendNamesAndObjects:(id)a0;
- (id)appendName:(id)a0 object:(id)a1;
- (id)appendName:(id)a0 unsignedInteger:(unsigned long long)a1;
- (id)appendObject:(id)a0 withName:(id)a1;
- (void)tryAppendKey:(id)a0;
- (void).cxx_destruct;
- (id)appendName:(id)a0 object:(id)a1 usingLightweightDescription:(BOOL)a2;
- (id)appendName:(id)a0 integerValue:(long long)a1;
- (id)appendName:(id)a0 pointerValue:(void *)a1;
- (id)appendName:(id)a0 boolValue:(BOOL)a1;

@end
