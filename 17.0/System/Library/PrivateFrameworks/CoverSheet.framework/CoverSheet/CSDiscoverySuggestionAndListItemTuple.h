@class CSListItem;
@protocol ATXUserEducationSuggestion;

@interface CSDiscoverySuggestionAndListItemTuple : NSObject

@property (retain, nonatomic) id<ATXUserEducationSuggestion> discoverySuggestion;
@property (retain, nonatomic) CSListItem *listItem;

- (void).cxx_destruct;

@end
