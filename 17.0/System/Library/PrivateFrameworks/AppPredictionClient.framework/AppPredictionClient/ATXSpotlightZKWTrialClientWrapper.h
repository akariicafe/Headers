@class _PASLock;

@interface ATXSpotlightZKWTrialClientWrapper : ATXTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)initWithClientIdentifier:(int)a0;
- (void).cxx_destruct;
- (BOOL)nsuaSuggestions;
- (long long)alternateRecentsRanking;
- (id)codePathForAlternateRecentsControl;
- (id)codePathForAlternateRecentsTreatment;
- (id)codePathIdForSuggestionsMaxCount;
- (id)codepathIDs;
- (BOOL)matchesAlternateRecentsControlCodePath;
- (BOOL)matchesAlternateRecentsTreatmentCodePath;
- (BOOL)matchesSuggestionsMaxCount;
- (BOOL)showNSUASuggestionsAsAppLaunches;
- (long long)suggestionsMaxCount;
- (void)updateFactors;

@end
