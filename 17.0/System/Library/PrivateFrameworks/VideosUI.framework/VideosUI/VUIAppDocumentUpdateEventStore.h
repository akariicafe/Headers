@class NSArray, NSMutableDictionary;

@interface VUIAppDocumentUpdateEventStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventByEventDescriptor;
@property (readonly, copy, nonatomic) NSArray *events;

- (id)init;
- (void)addEvents:(id)a0;
- (void)removeAllEvents;
- (id)description;
- (void).cxx_destruct;
- (void)addEvent:(id)a0;
- (void)removeEvent:(id)a0;

@end
