@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MRMediaSuggestionPreferences : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_globalDisplayPreferencesForContexts;
    NSMutableDictionary *_disabledBundlesForContexts;
}

@property (class, readonly, nonatomic) NSArray *allContexts;

@property (copy, nonatomic) id /* block */ userDisplayPreferencesDidChangeCallback;

- (id)init;
- (void)dealloc;
- (BOOL)suggestionsDisabledInContext:(id)a0;
- (id)disabledBundleIdentifiersInContext:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
