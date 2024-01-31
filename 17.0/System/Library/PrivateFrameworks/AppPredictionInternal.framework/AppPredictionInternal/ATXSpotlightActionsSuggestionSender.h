@class NSString, NSDictionary, NSSet;

@interface ATXSpotlightActionsSuggestionSender : NSObject {
    NSString *_previousOngoingCallIdentifier;
    NSString *_previousNowPlayingIdentifier;
    NSDictionary *_previousDirectionsIdentifiers;
    NSSet *_previousIdentifiers;
}

+ (id)identifiersForSuggestionsFromLayout:(id)a0;
+ (id)identifierForNowPlayingSuggestionFromLayout:(id)a0;
+ (id)identifiersForDirectionsSuggestionFromLayout:(id)a0;
+ (id)identifierForOngoingCallSuggestionFromLayout:(id)a0;

- (id)init;
- (void)_processChanges:(id)a0;
- (void)_sendSpotlightSuggestionUpdateNotification:(id)a0;
- (void).cxx_destruct;
- (void)_logCAEvents:(id)a0 eventType:(long long)a1 toStream:(id)a2;
- (void)blendingLayerDidUpdateSpotlightUICache:(id)a0;

@end
