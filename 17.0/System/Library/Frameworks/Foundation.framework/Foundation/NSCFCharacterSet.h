@interface NSCFCharacterSet : NSMutableCharacterSet

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)removeCharactersInString:(id)a0;
- (void)invert;
- (void)addCharactersInString:(id)a0;
- (id)retain;
- (BOOL)allowsWeakReference;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (void)makeCharacterSetFast;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (unsigned long long)retainCount;
- (void)encodeWithCoder:(id)a0;
- (id)bitmapRepresentation;
- (id)invertedSet;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (BOOL)characterIsMember:(unsigned short)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (Class)classForArchiver;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (Class)classForKeyedArchiver;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)makeCharacterSetCompact;

@end
