@class NSArray;

@interface MapsSuggestions.MapsSuggestionsFakeFinanceKitConnector : NSObject <MapsSuggestions.MapsSuggestionsFinanceKitConnector> {
    void /* unknown type, empty encoding */ orderPickups;
    void /* unknown type, empty encoding */ _callbackHandle;
}

@property (nonatomic, copy) NSArray *orderPickups;
@property (nonatomic, copy) id /* block */ _callbackHandle;

- (id)init;
- (void).cxx_destruct;
- (id)startObservingOrderPickupsIn:(double)a0 callback:(id /* block */)a1;
- (void)updatedOrders;

@end
