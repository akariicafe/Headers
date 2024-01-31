@class NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetCustomURLAuthentication : NSObject {
    struct OpaqueFigCustomURLHandler { } *_handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)copyKeychainCredentialForUrl:(id)a0;
+ (int)sendAuthResponse:(struct __CFDictionary { } *)a0 requestID:(unsigned long long)a1 disposition:(long long)a2 credential:(id)a3 authHandler:(struct OpaqueFigCustomURLHandler { } *)a4;

- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (void)dealloc;
- (int)_handleAuthChallenge:(struct __CFDictionary { } *)a0 requestID:(unsigned long long)a1 canHandleRequestOut:(char *)a2;

@end
