@interface SBHFloatingDockStyleConfiguration : NSObject <NSCopying>

@property (class, readonly, nonatomic) SBHFloatingDockStyleConfiguration *defaultConfiguration;

@property (readonly, nonatomic) unsigned long long backgroundEffect;
@property (readonly, nonatomic) unsigned long long platterEffect;
@property (readonly, nonatomic) unsigned long long folderIconBackgroundStyle;
@property (readonly, nonatomic) BOOL wantsPlatterShadow;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)configurationWithWantsPlatterShadow:(BOOL)a0;
- (id)initWithBackgroundEffect:(unsigned long long)a0 platterEffect:(unsigned long long)a1 wantsPlatterShadow:(BOOL)a2 folderIconBackgroundStyle:(unsigned long long)a3;

@end
