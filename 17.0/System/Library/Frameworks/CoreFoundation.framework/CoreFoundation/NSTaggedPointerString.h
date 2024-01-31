@interface NSTaggedPointerString : NSString

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (void)_setAsTaggedStringClass;

- (id)retain;
- (unsigned long long)hash;
- (unsigned long long)retainCount;
- (const char *)UTF8String;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)autorelease;
- (BOOL)_isCString;
- (BOOL)isEqualToString:(id)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)smallestEncoding;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (unsigned long long)fastestEncoding;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isNSString__;
- (const unsigned short *)_fastCharacterContents;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;
- (BOOL)getBytes:(void *)a0 maxLength:(unsigned long long)a1 usedLength:(unsigned long long *)a2 encoding:(unsigned long long)a3 options:(unsigned long long)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (BOOL)_getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned int)a2;
- (id)lowercaseStringWithLocale:(id)a0;
- (id)uppercaseStringWithLocale:(id)a0;

@end
