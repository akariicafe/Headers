@interface OADEffect : NSObject <NSCopying> {
    int mType;
}

- (unsigned long long)hash;
- (id)description;
- (id)initWithType:(int)a0;
- (BOOL)isEqual:(id)a0;
- (int)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStyleColor:(id)a0;

@end
