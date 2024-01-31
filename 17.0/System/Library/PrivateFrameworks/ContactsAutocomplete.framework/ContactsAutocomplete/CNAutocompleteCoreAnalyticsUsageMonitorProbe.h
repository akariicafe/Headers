@class NSNumber, NSMutableDictionary, NSString;

@interface CNAutocompleteCoreAnalyticsUsageMonitorProbe : NSObject <CNAutocompleteUsageMonitorProbe>

@property (retain, nonatomic) NSMutableDictionary *coreAnalyticsDictionary;
@property (retain, nonatomic) NSNumber *selectedIndex;
@property (retain, nonatomic) NSNumber *selectedPredictionIndex;
@property (retain, nonatomic) NSNumber *lengthOfSearchString;
@property (retain, nonatomic) NSNumber *sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)bundleIdentifierOfCurrentProcess;
- (id)makeBundleIdentifierOfCurrentProcess;
- (void)recordDuetReturnedResults:(BOOL)a0;
- (void)recordUserIgnoredPredictionAfterDelay:(double)a0;
- (void)recordUserIgnoredPrefixedResultAfterDelay:(double)a0 batch:(unsigned long long)a1;
- (void)recordUserSawCuratedResults:(unsigned long long)a0;
- (void)recordUserSawPredictions;
- (void)recordUserSawResultsConsideredSuggestion:(unsigned long long)a0;
- (void)recordUserSelectedIndex:(unsigned long long)a0;
- (void)recordUserSelectedPredictionAtIndex:(unsigned long long)a0;
- (void)recordUserSelectedResultWithSourceType:(unsigned long long)a0;
- (void)recordUserTypedInNumberOfCharacters:(unsigned long long)a0;
- (void)sendData;
- (id)sourceKeysForSourceType:(unsigned long long)a0;

@end
