@interface OADTextBodyAutoFit : NSObject {
    unsigned char mType;
}

- (unsigned long long)hash;
- (id)description;
- (id)initWithType:(unsigned char)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned char)type;

@end
