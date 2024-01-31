@class NSString, NSObject;

@interface HMFTimerManagerTimerContext : NSObject <HMFTimerManagerTimerContext>

@property (class, readonly, nonatomic) id /* block */ comparator;

@property (readonly, nonatomic) double expirationTime;
@property (readonly) NSObject *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 expirationTime:(double)a1;

@end
