@class NSArray;

@interface ATXWidgetSuggestionsDenyList : NSObject {
    NSArray *_bannedWidgets;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssets:(id)a0;
- (BOOL)containsInfoSuggestion:(id)a0;

@end
