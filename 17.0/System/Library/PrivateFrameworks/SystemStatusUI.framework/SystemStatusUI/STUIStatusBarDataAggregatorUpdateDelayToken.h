@class NSSet, NSTimer, NSString;

@interface STUIStatusBarDataAggregatorUpdateDelayToken : NSObject <STUIStatusBarDataAggregatorUpdateDelayToken, BSInvalidatable>

@property (readonly, nonatomic) NSSet *delayedKeys;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) NSTimer *timeoutTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithEntryKeys:(id)a0 timeout:(double)a1 timeoutBlock:(id /* block */)a2;

@end
