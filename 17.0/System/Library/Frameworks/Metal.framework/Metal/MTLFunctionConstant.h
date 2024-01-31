@class NSString;

@interface MTLFunctionConstant : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long index;
@property (readonly) BOOL required;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

@end
