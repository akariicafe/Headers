@class NSString, NSDictionary;

@interface WFUserEvent : NSObject <WFUIEvent>

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithType:(long long)a0;
+ (id)eventWithType:(long long)a0 state:(BOOL)a1;
+ (id)eventWithType:(long long)a0 stateEnum:(unsigned int)a1;

- (void).cxx_destruct;
- (id)_eventTypeStringForType:(long long)a0;
- (id)initWithType:(long long)a0 state:(BOOL)a1 stateEnum:(unsigned int)a2;

@end
