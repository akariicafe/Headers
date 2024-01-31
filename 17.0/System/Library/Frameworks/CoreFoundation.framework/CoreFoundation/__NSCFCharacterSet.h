@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)removeCharactersInString:(id)a0;
- (void)invert;
- (void)addCharactersInString:(id)a0;
- (id)retain;
- (unsigned long long)hash;
- (void)makeCharacterSetFast;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (unsigned long long)retainCount;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (id)bitmapRepresentation;
- (id)invertedSet;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (BOOL)_isDeallocating;
- (BOOL)characterIsMember:(unsigned short)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)makeCharacterSetCompact;

@end
