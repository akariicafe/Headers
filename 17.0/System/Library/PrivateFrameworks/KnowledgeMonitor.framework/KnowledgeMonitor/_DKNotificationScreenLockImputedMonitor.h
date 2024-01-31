@class NSString, _DKEvent, NSDate;

@interface _DKNotificationScreenLockImputedMonitor : _DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor> {
    BOOL _enabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ instantHandler;
@property (readonly, nonatomic) _DKEvent *currentEvent;
@property (copy, nonatomic) id /* block */ historicalHandler;
@property (copy, nonatomic) id /* block */ shutdownHandler;
@property (readonly, nonatomic) NSDate *lastUpdate;

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)entitlements;
+ (void)setIsLocked:(BOOL)a0;
+ (id)_eventWithState:(id)a0;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)setCurrentEventInInstantStateUsingLastKnowledgeStoreEvent;
- (id)fetchMostRecentScreenLockStateEventFromKnowledgeStore;
- (void)deactivate;
- (void)receiveNotificationEvent:(id)a0;

@end
