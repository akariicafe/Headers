@interface PBOutlineBulletKey : NSObject <NSCopying> {
    unsigned int mSlideId;
    int mTextType;
    unsigned int mPlaceholderIndex;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOutlineBullet:(id)a0;
- (id)initWithSlideId:(unsigned int)a0 textType:(int)a1 placeholderIndex:(unsigned int)a2;

@end
