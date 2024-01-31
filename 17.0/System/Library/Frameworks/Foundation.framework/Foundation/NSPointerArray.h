@class NSPointerFunctions;

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSPointerFunctions *pointerFunctions;
@property unsigned long long count;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)weakObjectsPointerArray;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)strongObjectsPointerArray;
+ (id)pointerArrayWithStrongObjects;
+ (id)pointerArrayWithOptions:(unsigned long long)a0;
+ (id)pointerArrayWithWeakObjects;
+ (id)pointerArrayWithPointerFunctions:(id)a0;

- (void)compact;
- (void)removePointerAtIndex:(unsigned long long)a0;
- (id)init;
- (void)replacePointerAtIndex:(unsigned long long)a0 withPointer:(void *)a1;
- (void)encodeWithCoder:(id)a0;
- (void *)pointerAtIndex:(unsigned long long)a0;
- (Class)classForCoder;
- (id)allObjects;
- (id)initWithOptions:(unsigned long long)a0;
- (void)insertPointer:(void *)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithPointerFunctions:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPointer:(void *)a0;
- (id)mutableArray;

@end
