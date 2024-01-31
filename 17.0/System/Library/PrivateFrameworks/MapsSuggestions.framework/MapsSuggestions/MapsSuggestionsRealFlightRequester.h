@class NSString;

@interface MapsSuggestionsRealFlightRequester : NSObject <MapsSuggestionsFlightRequester>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requestFlightsWithFullFlightNumber:(id)a0 departureDate:(id)a1 handler:(id /* block */)a2;

@end
