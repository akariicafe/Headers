@interface ATXContextHeuristicSuggestionProducer : NSObject

+ (id)suggestionWithSpotlightAction:(id)a0 predictionReasons:(unsigned long long)a1 localizedReason:(id)a2 score:(double)a3 dateInterval:(id)a4;
+ (id)navigationToDestination:(id)a0 title:(id)a1 subtitle:(id)a2 transportType:(unsigned long long)a3 destinationName:(id)a4 predictionReasons:(unsigned long long)a5 localizedReason:(id)a6 score:(double)a7 shouldClearOnEngagement:(BOOL)a8 validStartDate:(id)a9 validEndDate:(id)a10 dateInterval:(id)a11;
+ (id)_uiSpecWithTitle:(id)a0 subtitle:(id)a1 predictionReason:(id)a2 shouldClearOnEngagement:(BOOL)a3 predictionReasons:(unsigned long long)a4 dateInterval:(id)a5;
+ (id)flightCheckInActivityWithSubtitle:(id)a0 url:(id)a1 teamIdentifier:(id)a2 predictionReasons:(unsigned long long)a3 localizedReason:(id)a4 score:(double)a5 validStartDate:(id)a6 validEndDate:(id)a7;
+ (id)dummySuggestionWithSpotlightAction:(id)a0 predictionReasons:(unsigned long long)a1 localizedReason:(id)a2 score:(double)a3;
+ (id)_executableSpecForShortcutsAction:(id)a0;
+ (id)toggleAirplaneModeWithPredictionReasons:(unsigned long long)a0 localizedReason:(id)a1 score:(double)a2 validFromStartDate:(id)a3 validToEndDate:(id)a4 dateInterval:(id)a5;
+ (id)_clientModelSpecForSpotlightRecents;
+ (id)_bundleIDWithURL:(id)a0;
+ (id)_suggestionWithSpotlightAction:(id)a0 predictionReasons:(unsigned long long)a1 localizedReason:(id)a2 score:(double)a3 uiSpec:(id)a4 dateInterval:(id)a5;
+ (id)_executableSpecForSpotlightAction:(id)a0;
+ (id)rideshareAppActionForDestination:(id)a0 preferredBundleId:(id)a1 predictionReasons:(unsigned long long)a2 title:(id)a3 localizedReason:(id)a4 score:(double)a5 validFromStartDate:(id)a6 validToEndDate:(id)a7 dateInterval:(id)a8;
+ (id)suggestionForConferenceWithURL:(id)a0 score:(double)a1 predictionReasons:(unsigned long long)a2 localizedReason:(id)a3 criteria:(id)a4 dateInterval:(id)a5;
+ (id)_dummyUiSpecWithTitle:(id)a0 subtitle:(id)a1 predictionReason:(id)a2 shouldClearOnEngagement:(BOOL)a3 predictionReasons:(unsigned long long)a4;
+ (id)suggestionWithURL:(id)a0 actionTitle:(id)a1 subtitle:(id)a2 bundleID:(id)a3 score:(double)a4 predictionReasons:(unsigned long long)a5 criteria:(id)a6 dateInterval:(id)a7;
+ (id)_mediaWithName:(id)a0 type:(long long)a1 adamIdentifier:(long long)a2 umcIdentifier:(id)a3 predictionReasons:(unsigned long long)a4 localizedReason:(id)a5 score:(double)a6 expirationDate:(id)a7;
+ (id)suggestionWithAction:(id)a0 predictionReasons:(unsigned long long)a1 localizedReason:(id)a2 score:(double)a3 dateInterval:(id)a4;
+ (id)_clientModelSpectForContextHeuristics;
+ (id)mediaWithName:(id)a0 type:(long long)a1 umcIdentifier:(id)a2 predictionReasons:(unsigned long long)a3 localizedReason:(id)a4 score:(double)a5 expirationDate:(id)a6;
+ (id)mediaWithName:(id)a0 type:(long long)a1 adamIdentifier:(long long)a2 predictionReasons:(unsigned long long)a3 localizedReason:(id)a4 score:(double)a5 expirationDate:(id)a6;
+ (id)suggestionForDNDWithTitle:(id)a0 eventUniqueID:(id)a1 identifier:(id)a2 until:(id)a3 score:(double)a4 predictionReasons:(unsigned long long)a5 localizedReason:(id)a6 validFromStartDate:(id)a7 validToEndDate:(id)a8 dateInterval:(id)a9;
+ (id)suggestionWithExecutableSpecification:(id)a0 title:(id)a1 subtitle:(id)a2 predictionReasons:(unsigned long long)a3 localizedReason:(id)a4 score:(double)a5;
+ (id)suggestionsForRecentResults:(id)a0;
+ (id)suggestionWithShortcutAction:(id)a0 predictionReasons:(unsigned long long)a1 localizedReason:(id)a2 title:(id)a3 subtitle:(id)a4 score:(double)a5 dateInterval:(id)a6;
+ (id)_suggestionWithSpotlightRecentAction:(id)a0 score:(double)a1;
+ (id)createSuggestionFromShortcutsAction:(id)a0 predictionReasons:(unsigned long long)a1 localizedReason:(id)a2 title:(id)a3 subtitle:(id)a4 score:(double)a5 shouldClearOnEngagement:(BOOL)a6 dateInterval:(id)a7;

@end
