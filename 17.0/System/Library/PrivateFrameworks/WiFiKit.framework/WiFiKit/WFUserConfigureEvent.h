@class NSString, NSDictionary;

@interface WFUserConfigureEvent : NSObject <WFUIEvent>

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configureEventWithType:(long long)a0 new:(long long)a1 old:(long long)a2;

@end
