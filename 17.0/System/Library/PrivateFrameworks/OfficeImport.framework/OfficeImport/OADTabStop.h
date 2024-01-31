@interface OADTabStop : NSObject {
    unsigned char mAlign;
    int mPosition;
}

- (void)setPosition:(int)a0;
- (unsigned long long)hash;
- (int)position;
- (BOOL)isEqual:(id)a0;
- (unsigned char)align;
- (void)setAlign:(unsigned char)a0;

@end
