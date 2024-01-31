@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {
    BOOL mHasTransition;
    int mTransition;
}

@property (retain, nonatomic) NSMutableDictionary *propertyMap;

- (id)init;
- (BOOL)hasProperties;
- (void)setTransition:(int)a0;
- (int)transition;
- (void).cxx_destruct;
- (BOOL)hasTransition;

@end
