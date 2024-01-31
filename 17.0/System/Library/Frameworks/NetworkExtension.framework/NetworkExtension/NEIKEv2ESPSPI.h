@interface NEIKEv2ESPSPI : NEIKEv2SPI <NSCopying> {
    unsigned int _value;
}

@property (readonly) unsigned int value;

- (unsigned long long)hash;
- (id)initWithValue:(unsigned int)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
