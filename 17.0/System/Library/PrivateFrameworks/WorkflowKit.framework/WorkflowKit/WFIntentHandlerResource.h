@class NSString, WFHandleIntentAction;

@interface WFIntentHandlerResource : WFResource <WFActionEventObserver>

@property (weak, nonatomic) WFHandleIntentAction *action;
@property (readonly, nonatomic) BOOL requiresIntentSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
