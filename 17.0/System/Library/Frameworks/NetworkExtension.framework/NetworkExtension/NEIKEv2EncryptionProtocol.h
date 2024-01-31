@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying> {
    BOOL _is256Bit;
    unsigned long long _wireType;
}

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEncryptionType:(unsigned long long)a0;

@end
