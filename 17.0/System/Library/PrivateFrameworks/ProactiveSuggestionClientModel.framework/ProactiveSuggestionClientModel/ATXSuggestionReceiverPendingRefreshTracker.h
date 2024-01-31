@class NSMutableSet, NSMutableDictionary;

@interface ATXSuggestionReceiverPendingRefreshTracker : NSObject

@property (retain, nonatomic) NSMutableSet *clientModelsThatUpdatedSuggestions;
@property (nonatomic) BOOL shouldForceRefreshForAllUIs;
@property (retain, nonatomic) NSMutableDictionary *registeredDelegatesForClientModels;
@property (retain, nonatomic) NSMutableDictionary *requestUUIDToClientModelCaches;

- (id)init;
- (void).cxx_destruct;

@end
