@interface JFXFilterEffect : JFXEffect

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)type;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentProperties;
- (id)renderEffect;
- (BOOL)enablePresentationState:(BOOL)a0;
- (id)filterContentDataSource;
- (void)setForceRenderAtPosterFrame:(BOOL)a0;

@end
