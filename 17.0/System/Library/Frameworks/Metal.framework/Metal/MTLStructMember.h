@class NSString;

@interface MTLStructMember : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long offset;
@property (readonly) unsigned long long dataType;
@property (readonly) unsigned long long argumentIndex;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (unsigned long long)renderTargetIndex;
- (id)structType;
- (id)arrayType;
- (id)pointerType;
- (id)textureReferenceType;
- (id)indirectArgumentType;

@end
