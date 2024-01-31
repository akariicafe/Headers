@class NSArray, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface PGWallpaperSuggestionAccumulator : NSObject {
    unsigned long long _targetNumberOfSuggestions;
    unsigned long long _targetMinimumNumberOfGatedSuggestions;
    unsigned long long _maximumNumberOfSuggestionsToTryForGating;
    unsigned long long _numberOfSuggestionsReceived;
    NSMutableArray *_suggestions;
    NSMutableArray *_gatingOverflow;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly) NSArray *suggestions;
@property (readonly) unsigned long long numberOfGatedSuggestions;
@property (readonly) BOOL accumulationIsComplete;

- (void).cxx_destruct;
- (void)addSuggestion:(id)a0 passingGating:(BOOL)a1;
- (id)initWithTargetNumberOfSuggestions:(unsigned long long)a0 targetMinimumNumberOfGatedSuggestions:(unsigned long long)a1 maximumNumberOfSuggestionsToTryForGating:(unsigned long long)a2 loggingConnection:(id)a3;

@end
