@class NSNumber, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ADWatchDogManager : ADSingleton {
    NSObject<OS_dispatch_queue> *_watchdogQueue;
}

@property (retain, nonatomic) NSNumber *currentToken;
@property (readonly, nonatomic) NSMutableDictionary *tokenCollection;

+ (id)sharedInstance;

- (id)init;
- (void)simulateCrash:(id)a0 becauseOf:(unsigned long long)a1 actuallyTook:(double)a2;
- (id)createNewWatchdog:(id)a0 withTimer:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)updateReason:(id)a0 forToken:(id)a1;
- (void)incrementToken;
- (id)getNextToken;
- (BOOL)removeWatchdogWithToken:(id)a0;

@end
