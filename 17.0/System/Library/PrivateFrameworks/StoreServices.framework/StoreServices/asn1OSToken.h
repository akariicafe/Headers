@class asn1Token;

@interface asn1OSToken : asn1Token

@property (readonly) asn1Token *value;

- (id)stringValue;
- (void)dealloc;
- (id)_initWithID:(unsigned long long)a0 class:(unsigned char)a1 length:(unsigned long long)a2 content:(const char *)a3 opaque:(BOOL)a4;

@end
