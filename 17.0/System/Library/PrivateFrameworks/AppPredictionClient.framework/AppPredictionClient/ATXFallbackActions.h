@class NSBundle, ATXProactiveSuggestionClientModelSpecification;

@interface ATXFallbackActions : NSObject {
    NSBundle *_bundle;
    ATXProactiveSuggestionClientModelSpecification *_clientModelSpec;
}

+ (id)stringForFallbackActionType:(unsigned long long)a0;
+ (id)fallbackActionsBundle;
+ (unsigned long long)fallbackActionTypeForString:(id)a0;
+ (id)dateWithoutMinutesAndSeconds:(id)a0;

- (id)localizedStringForKey:(id)a0;
- (id)init;
- (id)initWithClientModelSpec:(id)a0;
- (id)searchSafari;
- (id)proactiveSuggestionForAction:(id)a0;
- (id)suggestionforSpecifiedFallbackActionType:(unsigned long long)a0;
- (id)startATimer;
- (id)suggestionsForAllFallbackActions;
- (void).cxx_destruct;
- (id)viewPhotos;
- (id)sendAMessage;
- (id)createAnEventForCurrentDate:(id)a0;

@end
