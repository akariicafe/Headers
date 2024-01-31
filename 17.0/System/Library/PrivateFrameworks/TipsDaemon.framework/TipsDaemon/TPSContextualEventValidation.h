@class NSString, TPSContextualEvent, TPSEventsProvider;

@interface TPSContextualEventValidation : TPSTargetingValidation <TPSEventsProviderDelegate>

@property (retain, nonatomic) TPSContextualEvent *event;
@property (retain, nonatomic) TPSEventsProvider *eventProvider;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_contextualEventFromEventDictionary:(id)a0;
+ (id)_eventProviderForContextualEvent:(id)a0;

- (void).cxx_destruct;
- (void)dataProvider:(id)a0 didReceiveCallbackWithResult:(id)a1;
- (void)dataProvider:(id)a0 didFinishQueryWithResults:(id)a1;
- (void)validateWithCompletion:(id /* block */)a0;
- (id)initWithContextualEvent:(id)a0;

@end
