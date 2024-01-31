@interface RBTransitionEffect : NSObject {
    struct Effect { unsigned char type : 7; unsigned char has_animation : 1; unsigned char events : 6; unsigned char flags : 2; unsigned char begin_or_insert_animation; unsigned char dur_or_remove_animation; } _effect;
    union EffectOrArg { struct Effect { unsigned char type : 7; unsigned char has_animation : 1; unsigned char events : 6; unsigned char flags : 2; unsigned char begin_or_insert_animation; unsigned char dur_or_remove_animation; } effect; float arg; unsigned int int_arg; } _args[2];
}

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int flags;
@property (nonatomic) float beginTime;
@property (nonatomic) float duration;
@property (nonatomic) unsigned long long animationIndex;
@property (nonatomic) unsigned long long insertAnimationIndex;
@property (nonatomic) unsigned long long removeAnimationIndex;
@property (nonatomic) unsigned int events;

- (unsigned long long)hash;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setArgumentValue:(float)a0 atIndex:(unsigned long long)a1;
- (void)setIntegerArgumentValue:(unsigned int)a0 atIndex:(unsigned long long)a1;
- (float)argumentValueAtIndex:(unsigned long long)a0;
- (unsigned int)integerArgumentValueAtIndex:(unsigned long long)a0;

@end
