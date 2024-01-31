@class NSString, NSDictionary;

@interface WFScanSessionEvent : NSObject <WFUIEvent>

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scanSessionEventWithSectionCounts:(id)a0 duration:(double)a1;

@end
