@class NSString;

@interface MapsSuggestions.MapsSuggestionsFinanceKit : NSObject {
    void /* unknown type, empty encoding */ uniqueName;
    void /* unknown type, empty encoding */ _delegate;
}

@property (nonatomic, copy) NSString *uniqueName;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _connector;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _observer;
@property (nonatomic) void /* unknown type, empty encoding */ _timeWindow;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _requester;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ _queue;

- (id)init;
- (id)initFromResourceDepot:(id)a0;
- (void).cxx_destruct;
- (BOOL)canProduceEntriesOfTypeWithType:(long long)a0;
- (char)deleteOrDeclineEntryWithEntry:(id)a0 handler:(id /* block */)a1;
- (id)initWithConnector:(id)a0 requester:(id)a1;
- (void)updateOrdersWithOrders:(id)a0;

@end
