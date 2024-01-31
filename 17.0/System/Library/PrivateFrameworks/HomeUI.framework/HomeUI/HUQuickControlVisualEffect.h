@interface HUQuickControlVisualEffect : UIVisualEffect

@property (readonly, nonatomic) unsigned long long effectType;

+ (id)effectWithType:(unsigned long long)a0;

- (id)effectConfig;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
