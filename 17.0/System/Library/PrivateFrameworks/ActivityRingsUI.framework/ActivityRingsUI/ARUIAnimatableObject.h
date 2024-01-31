@class NSMutableDictionary;

@interface ARUIAnimatableObject : NSObject {
    NSMutableDictionary *_animatableProperties;
}

- (void)update:(double)a0;
- (void).cxx_destruct;
- (id)_animatablePropertyForType:(unsigned long long)a0;
- (id)_newAnimatablePropertyForType:(unsigned long long)a0;
- (void)addAnimation:(id)a0 forPropertyType:(unsigned long long)a1;
- (BOOL)areAnimationsInProgress;
- (id)endingValueForPropertyType:(unsigned long long)a0;
- (void)removeAllAnimationsForPropertyType:(unsigned long long)a0;
- (void)setValue:(id)a0 forPropertyType:(unsigned long long)a1;

@end
