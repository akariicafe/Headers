@interface Swift.__StringStorage : Swift.__SwiftNativeNSString <Swift._NSCopying> {
    void /* unknown type, empty encoding */ _capacityAndFlags;
    void /* unknown type, empty encoding */ _countAndFlags;
}

@property (nonatomic, readonly) long long length;
@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long fastestEncoding;

- (const char *)UTF8String;
- (unsigned short)characterAtIndex:(long long)a0;
- (char)isEqualToString:(id)a0;
- (const char *)_fastCStringContents:(char)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct { long long x0; long long x1; })a1;
- (char)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (char)getCString:(char *)a0 maxLength:(long long)a1 encoding:(unsigned long long)a2;
- (id)init;

@end
