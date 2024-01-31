@class NSString, AFInterstitialConfiguration, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, AFInterstitialProviderDelegate;

@interface AFInterstitialProvider : NSObject <AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    AFInterstitialConfiguration *_configuration;
    NSMutableArray *_pendingActions;
    id _context;
    id<AFInterstitialProviderDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_invalidate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_performNextActionWithExpectedDelay:(double)a0;
- (id)initWithStyle:(long long)a0 recordRoute:(id)a1 isVoiceTrigger:(BOOL)a2 isDucking:(BOOL)a3 isTwoShot:(BOOL)a4 speechEndHostTime:(unsigned long long)a5 context:(id)a6 delegate:(id)a7;
- (id)initWithStyle:(long long)a0 recordRoute:(id)a1 isVoiceTrigger:(BOOL)a2 isDucking:(BOOL)a3 isTwoShot:(BOOL)a4 speechEndHostTime:(unsigned long long)a5 context:(id)a6 preferences:(id)a7 delegate:(id)a8;

@end
