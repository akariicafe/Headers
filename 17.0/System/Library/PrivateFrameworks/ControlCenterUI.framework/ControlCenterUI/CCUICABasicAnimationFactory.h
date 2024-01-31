@class NSString, CCUICABasicAnimationParameters;

@interface CCUICABasicAnimationFactory : NSObject <CCUICAAnimationFactory> {
    CCUICABasicAnimationParameters *_parameters;
    double _speed;
}

@property (readonly, nonatomic) double animationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldAnimateAdditivelyForView:(id)a0 withKeyPath:(id)a1;
- (id)initWithParameters:(id)a0 speed:(double)a1;
- (double)animationDuration;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void).cxx_destruct;
- (id)_animation;

@end
