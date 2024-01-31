@interface MapsSuggestionsTransportTypePreferenceCondition : MapsSuggestionsBaseCondition {
    long long _requiredTransportTypePreference;
}

- (BOOL)isTrue;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 requiresTransportType:(long long)a1;

@end
