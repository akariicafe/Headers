@interface Multipart : NSObject <NSCopying> {
    unsigned long long identifier;
    unsigned char partIndex;
    unsigned char partCount;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithIndex:(unsigned char)a0;
- (BOOL)isEqualToMultipart:(id)a0;

@end
