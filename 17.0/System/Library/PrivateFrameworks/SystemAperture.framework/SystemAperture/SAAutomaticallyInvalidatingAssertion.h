@class NSString, NSTimer, NSDate;

@interface SAAutomaticallyInvalidatingAssertion : SAAssertion <SAAutomaticallyInvalidatable> {
    NSString *_key;
    NSString *_lockReason;
    NSTimer *_invalidationTimer;
}

@property (readonly, nonatomic) double invalidationInterval;
@property (nonatomic, getter=isAutomaticallyInvalidatable) BOOL automaticallyInvalidatable;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resetAutomaticInvalidationTimer;
- (id)_descriptionConstituents;
- (BOOL)setAutomaticallyInvalidatable:(BOOL)a0 lockingWithKey:(id)a1 reason:(id)a2;
- (void)_invalidateInvalidationTimerIfNecessary;
- (void)_scheduleInvalidationTimerIfNecessary;
- (BOOL)_setAutomaticallyInvalidatable:(BOOL)a0 lockingWithKey:(id)a1 reason:(id)a2;
- (id)initWithInvalidationInterval:(double)a0;

@end
