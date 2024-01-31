@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation {
    struct __C3DKeyframedAnimation { } *_c3dAnimation;
    BOOL _caReady;
}

+ (BOOL)supportsSecureCoding;

- (void)setKeyPath:(id)a0;
- (void)setAdditive:(BOOL)a0;
- (void)setRepeatCount:(float)a0;
- (id)keyPath;
- (void)setRepeatDuration:(double)a0;
- (float)repeatCount;
- (void)dealloc;
- (void)setTimeOffset:(double)a0;
- (double)timeOffset;
- (BOOL)autoreverses;
- (void)setFadeOutDuration:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setAutoreverses:(BOOL)a0;
- (id)description;
- (void)setTimingFunction:(id)a0;
- (id)fillMode;
- (void)setValues:(id)a0;
- (void)setFillMode:(id)a0;
- (void)setFadeInDuration:(double)a0;
- (double)fadeOutDuration;
- (id)timingFunction;
- (void)setSpeed:(float)a0;
- (BOOL)additive;
- (double)duration;
- (double)fadeInDuration;
- (BOOL)isAdditive;
- (double)repeatDuration;
- (id)values;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)speed;
- (void)setDuration:(double)a0;
- (id)timingFunctions;
- (id)biasValues;
- (id)continuityValues;
- (BOOL)cumulative;
- (BOOL)isCumulative;
- (BOOL)isRemovedOnCompletion;
- (id)keyTimes;
- (void)setBiasValues:(id)a0;
- (void)setContinuityValues:(id)a0;
- (void)setCumulative:(BOOL)a0;
- (void)setKeyTimes:(id)a0;
- (void)setRemovedOnCompletion:(BOOL)a0;
- (void)setTensionValues:(id)a0;
- (void)setTimingFunctions:(id)a0;
- (id)tensionValues;
- (id)animationEvents;
- (void)_clearC3DCache;
- (void)_convertToCA;
- (struct __C3DKeyframedAnimation { } *)c3dAnimation;
- (BOOL)commitsOnCompletion;
- (void)setAnimationEvents:(id)a0;
- (void)setC3dAnimation:(struct __C3DKeyframedAnimation { } *)a0;
- (void)setCommitsOnCompletion:(BOOL)a0;
- (void)setUsesSceneTimeBase:(BOOL)a0;
- (BOOL)usesSceneTimeBase;

@end
