@interface _UIStackedImageShadowImageKey : NSObject {
    double _shadowRadius;
    double _cornerRadius;
    BOOL _isContinuousCorner;
    double _white;
    double _alpha;
}

+ (id)keyWithShadowRadius:(double)a0 cornerRadius:(double)a1 isContinuousCorner:(BOOL)a2 white:(double)a3 alpha:(double)a4;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
