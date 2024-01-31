@class NSString;

@interface MTSearchTimerIntentHandler : MTTimerIntentHandler <INSearchForTimersIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleSearchForTimers:(id)a0 completion:(id /* block */)a1;

@end
