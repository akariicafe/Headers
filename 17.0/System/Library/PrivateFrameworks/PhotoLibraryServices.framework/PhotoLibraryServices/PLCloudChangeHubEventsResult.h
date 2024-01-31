@class NSString, NSObject;
@protocol OS_xpc_object;

@interface PLCloudChangeHubEventsResult : NSObject <PLCloudChangeEventsResult> {
    NSObject<OS_xpc_object> *_events;
}

@property (readonly) long long resultType;
@property (readonly) unsigned long long changeHubEventIndex;
@property (readonly, copy) NSString *currentTokenDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enumerateLocalEventsWithBlock:(id /* block */)a0;
- (id)initWithUnsuccessfulResultType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithResultType:(long long)a0 events:(id)a1 changeHubEventIndex:(unsigned long long)a2;
- (id)initWithSuccesfulEvents:(id)a0 changeHubEventIndex:(unsigned long long)a1;
- (id)localEventFromEvent:(id)a0;

@end
