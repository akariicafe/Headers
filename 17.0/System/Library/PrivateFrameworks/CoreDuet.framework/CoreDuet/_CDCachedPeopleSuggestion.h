@class _CDPeopleSuggesterContext, NSArray, NSDate, _CDPeopleSuggesterSettings;

@interface _CDCachedPeopleSuggestion : NSObject

@property (retain) NSDate *date;
@property (retain) _CDPeopleSuggesterContext *context;
@property (retain) _CDPeopleSuggesterSettings *settings;
@property (retain) NSArray *suggestions;

- (void).cxx_destruct;
- (BOOL)isValidForContext:(id)a0;
- (BOOL)isValidForContext:(id)a0 settings:(id)a1 timeoutSeconds:(double)a2;
- (BOOL)isValidForSettings:(id)a0;

@end
