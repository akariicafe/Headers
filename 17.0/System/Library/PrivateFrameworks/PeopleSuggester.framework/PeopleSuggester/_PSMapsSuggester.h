@interface _PSMapsSuggester : NSObject

- (void)deleteMapsFeedbackEventsMatchingHandle:(id)a0 contactId:(id)a1 startLocationId:(id)a2 endLocationId:(id)a3;
- (void)provideMapsFeedback:(id)a0;
- (id)suggestionsFromContext:(id)a0 maxSuggestions:(unsigned long long)a1;

@end
