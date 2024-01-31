@class NSSet;

@interface COSignalsClientObserverSet : COClientObserverSet

@property (readonly, nonatomic) NSSet *constraints;

- (void)addClientObserver:(id)a0 forNotificationName:(id)a1;

@end
