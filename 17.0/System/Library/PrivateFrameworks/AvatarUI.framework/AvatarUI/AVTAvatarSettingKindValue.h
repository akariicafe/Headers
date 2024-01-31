@interface AVTAvatarSettingKindValue : NSObject <NSCopying>

@property (readonly, nonatomic) struct { long long destination; long long category; } settingKind;

+ (id)valueWithSettingKind:(struct { long long x0; long long x1; })a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSettingKind:(struct { long long x0; long long x1; })a0;

@end
