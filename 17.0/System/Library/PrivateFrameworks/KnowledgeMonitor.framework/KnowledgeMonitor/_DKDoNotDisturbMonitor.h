@class NSString, DNDStateService;

@interface _DKDoNotDisturbMonitor : _DKMonitor <DNDStateUpdateListener>

@property (retain, nonatomic) DNDStateService *dndStateService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventStream;
+ (id)_eventWithState:(BOOL)a0;

@end
