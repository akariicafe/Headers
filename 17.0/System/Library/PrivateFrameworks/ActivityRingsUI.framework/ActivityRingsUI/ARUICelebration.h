@class _TtC3VFX8VFXScene;

@interface ARUICelebration : NSObject <NSCopying>

@property (readonly, nonatomic) _TtC3VFX8VFXScene *scene;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long type;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)apply:(id)a0 context:(id)a1;
- (void)updateDeltaTime:(double)a0;

@end
