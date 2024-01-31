@interface TTBulletTextAttributesCacheKey : NSObject

@property (nonatomic) unsigned long long hashValue;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTextFont:(id)a0 paragraphStyle:(id)a1 zoomFactor:(double)a2;

@end
