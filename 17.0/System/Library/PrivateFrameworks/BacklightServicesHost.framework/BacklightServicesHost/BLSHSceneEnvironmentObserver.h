@class NSString;
@protocol BLSHSceneEnvironmentObserving;

@interface BLSHSceneEnvironmentObserver : NSObject <FBSceneObserver> {
    id<BLSHSceneEnvironmentObserving> _observer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observerWithObserver:(id)a0;

@end
