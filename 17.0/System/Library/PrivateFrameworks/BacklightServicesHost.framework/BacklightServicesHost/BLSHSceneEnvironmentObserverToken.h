@protocol NSCopying, NSObject, BLSHSceneEnvironmentObserving;

@interface BLSHSceneEnvironmentObserverToken : NSObject <NSCopying> {
    id<BLSHSceneEnvironmentObserving> _observer;
    id<NSObject, NSCopying> _sceneIdentityToken;
}

+ (id)tokenWithObserver:(id)a0 sceneIdentityToken:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObserver:(id)a0 sceneIdentityToken:(id)a1;

@end
