@class NSArray;

@interface SGRealtimeSuggestionsTuple : NSObject

@property (retain) NSArray *contacts;
@property (retain) NSArray *events;
@property (retain) NSArray *reminders;
@property (retain) NSArray *deliveries;
@property (retain) NSArray *invalidatedIdentifiers;
@property (retain) NSArray *walletOrders;
@property (retain) NSArray *walletPasses;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)suggestionsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)combinedSuggestions;

@end
