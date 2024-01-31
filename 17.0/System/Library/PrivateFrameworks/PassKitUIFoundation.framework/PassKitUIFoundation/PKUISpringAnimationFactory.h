@class NSString;

@interface PKUISpringAnimationFactory : PKSpringAnimationFactory <_UIBasicAnimationFactory>

@property (copy, nonatomic) id /* block */ animationDelayHandler;
@property (readonly, nonatomic) double maximumVendedDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void).cxx_destruct;
- (id)highFrameRateSpringAnimationForView:(id)a0 withKeyPath:(id)a1 reason:(unsigned short)a2;
- (id)springAnimationForView:(id)a0 withKeyPath:(id)a1;
- (id)_springAnimationForView:(id)a0 withKeyPath:(id)a1;

@end
