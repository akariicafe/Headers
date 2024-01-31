@class NSString;

@interface _NSAttributeDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *name;

+ (void)initialize;
+ (id)descriptorForAttributeKey:(id)a0;

- (void)dealloc;
- (id)initWithName:(id)a0;
- (id)attributeValueFromValue:(id)a0;

@end
