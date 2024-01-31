@class NSString;

@interface IMContactStoreChangeHistoryEventsHandler : NSObject <CNChangeHistoryEventVisitor>

@property (nonatomic) BOOL receivedDropEverythingEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitUpdateContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)postNotificationForCNContact:(id)a0 eventType:(unsigned long long)a1 handleIDsToProcess:(id)a2;
- (void)processChangeEventForContact:(id)a0 contactFromCache:(id)a1 eventType:(unsigned long long)a2 handleID:(id)a3;
- (void)processContactChangeEventForContact:(id)a0 ofEventType:(unsigned long long)a1;

@end
