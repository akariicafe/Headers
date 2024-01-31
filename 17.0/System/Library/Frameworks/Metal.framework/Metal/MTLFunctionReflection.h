@class NSArray;

@interface MTLFunctionReflection : NSObject

@property (readonly) NSArray *arguments;
@property (readonly) NSArray *bindings;
@property (readonly) unsigned long long primitiveKind;
@property (readonly) NSArray *tags;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

@end
