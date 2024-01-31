@interface _PFAbstractString : NSString

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;
+ (id)alloc;

- (void)dealloc;
- (const char *)cString;
- (Class)classForCoder;
- (id)description;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)smallestEncoding;
- (unsigned long long)fastestEncoding;
- (const unsigned short *)_fastCharacterContents;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;

@end
