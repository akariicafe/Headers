@class NSData, NSString, NSArray, NSDate, PRSRankingSpanCalculator, NSDictionary, PRSL2FeatureVector, NSMutableArray;

@interface PRSRankingItem : NSObject <SSDataCollectible> {
    BOOL _isInternal;
    NSMutableArray *_matchedSenders;
    NSMutableArray *_matchedVipSenders;
    NSMutableArray *_matchedRecipients;
    BOOL _isPrepared;
    BOOL _isNonProgrammedSiriAction;
    float _maxCoverage;
    float _firstPosition;
    NSDate *_interestingDate;
    PRSRankingSpanCalculator *_spanCalculator;
    NSString *_contentType;
    unsigned long long _bundleIDType;
    unsigned long long _importantPropertiesPrefixMatched;
    unsigned long long _importantPropertiesWordMatched;
    long long _queryTermCount;
    unsigned long long *_attrCountsPrefix;
    unsigned long long *_attrCountsWord;
    unsigned long long *_attrCountsPrefixLast;
    unsigned long long *_attrCountsPrefix2;
    unsigned long long *_attrCountsWord2;
    unsigned long long *_attrCountsPrefixLast2;
    unsigned long long *_attrCountsPrefix3;
    unsigned long long *_attrCountsWord3;
    unsigned long long *_attrCountsPrefixLast3;
    unsigned long long _attrExact;
    unsigned long long _attrStrong;
    unsigned long long _attrAsTyped;
    float *_cachedFeatures;
    NSArray *_emailAddresses;
    unsigned __int128 _inputToModelScore;
    unsigned __int128 _indexScore;
}

@property (retain, nonatomic) NSDate *mailDate;
@property (nonatomic) float pommesL1Score;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) float rawScore;
@property (nonatomic) float feedbackScore;
@property (nonatomic) float score;
@property (nonatomic) float withinBundleScore;
@property (nonatomic) double suggestionScore;
@property (nonatomic) double engagementScore;
@property (nonatomic) double topicalityScore;
@property (nonatomic) double freshnessScore;
@property (nonatomic) double likelihood;
@property (nonatomic) BOOL exactMatchedLaunchString;
@property (retain, nonatomic) NSArray *recentSimilarIntentEngagementDates;
@property (retain, nonatomic) NSString *sectionBundleIdentifier;
@property (retain, nonatomic) NSString *firstMatchedAltName;
@property (retain, nonatomic) NSString *exactMatchedKeyword;
@property (retain, nonatomic) NSString *displayNameInitials;
@property (retain, nonatomic) PRSL2FeatureVector *L2FeatureVector;
@property (retain, nonatomic) NSData *serverFeaturesJSON;
@property (retain, nonatomic) NSData *serverSuggestionsData;
@property (retain, nonatomic) NSData *localSuggestionsData;
@property (nonatomic) BOOL eligibleForDemotion;
@property (nonatomic) BOOL shouldHideUnderShowMore;
@property (nonatomic) BOOL shouldHideUnderShowMoreIfNotTophit;
@property (nonatomic) BOOL recentForTopHit;
@property (nonatomic) BOOL recentForAboveThresholdTopHit;
@property (nonatomic) BOOL matchedQueryTerms;
@property (nonatomic) BOOL hasPolicyMultipleTermsPhraseMatch;
@property (nonatomic) BOOL hasPolicySingleTermPhraseMatch;
@property (nonatomic) BOOL hasPolicyMultipleTermsNearMatch;
@property (nonatomic) BOOL isSafariTopHit;
@property (nonatomic) BOOL isBundleDemotedForBullseyeCommittedSearch;
@property (nonatomic) BOOL hasShortCut;
@property (nonatomic) BOOL wasEngaged;
@property (nonatomic) BOOL wasEngagedInSpotlight;
@property (nonatomic) BOOL isLocalTopHitCandidate;
@property (nonatomic) BOOL displayNameInitialsPrefixMatchOnly;
@property (nonatomic) BOOL displayNameInitialsFirstWordAndMoreMatchOnly;
@property (nonatomic) BOOL vendorNameIsDisplayNamePrefix;
@property (nonatomic) BOOL isNotExecutable;
@property (nonatomic) BOOL isKeywordMatch;
@property (nonatomic) BOOL wordMatchedKeyword;
@property (nonatomic) BOOL photosMatch;
@property (nonatomic) BOOL photosExactMatch;
@property (nonatomic) BOOL isServerAlternativeResult;
@property (nonatomic) double mostRecentUsedDate;
@property (nonatomic) double closestUpComingDate;
@property (nonatomic) int topHitReason;
@property (nonatomic) struct { long long x0; unsigned long long x1[4]; unsigned long long x2[4]; unsigned long long x3[4]; void *x4[0]; } *attributes;
@property (nonatomic) unsigned __int128 test_inputToModelScore;
@property (nonatomic) unsigned __int128 test_indexScore;
@property (retain, nonatomic) NSDictionary *l2Features;
@property (nonatomic) float l2Score;
@property (retain, nonatomic) NSData *l2Signals;
@property (nonatomic) float photosFallbackL2Score;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (readonly, nonatomic) NSDate *interestingDate;
@property (readonly, nonatomic) NSDate *lastAccessDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)bundlesExcludedFromRankCategory;
+ (unsigned short)featureFromVirtualIdx:(unsigned long long)a0;
+ (float)inAppEngagementScoreWithEvaluator:(id)a0 currentTime:(double)a1 queriesInApp:(id)a2 datesInApp:(id)a3 topicalityScore:(float)a4;
+ (float)matchScoreLaunchString:(id)a0 withEvaluator:(id)a1;
+ (void)matchScoreTokensFromText:(id)a0 withEvaluator:(id)a1 withHandler:(id /* block */)a2;
+ (id)rankingDescriptorForBundleFeature:(unsigned long long)a0;
+ (unsigned long long)requiredAttributesCount;
+ (id)tokenizeContactsEmailAddress:(id)a0 removeTLD:(BOOL)a1 usernameTokenCount:(unsigned long long *)a2 usernameLength:(unsigned long long *)a3 domainLength:(unsigned long long *)a4 username:(id *)a5;
+ (id)tokenizeContactsName:(id)a0 tokenCount:(unsigned long long *)a1;
+ (id)tokenizeTitleString:(id)a0;
+ (id)tokenizeURLString:(id)a0 removeTLD:(BOOL)a1 hostTokenCount:(unsigned long long *)a2 hostLength:(unsigned long long *)a3 pathLength:(unsigned long long *)a4 queryLength:(unsigned long long *)a5 fragmentLength:(unsigned long long *)a6;

- (void)dealloc;
- (id)contentType;
- (void).cxx_destruct;
- (id)displayName;
- (BOOL)isTopHit;
- (id)dueDate;
- (unsigned long long)attrCountWord2:(unsigned long long)a0;
- (long long)compareShortcutTopHitCandidate:(id)a0;
- (float)matchScoreForMailWithEvaluator:(id)a0;
- (int)shortcutPriorityFromIdentifier:(id)a0;
- (unsigned long long)attrCountWord3:(unsigned long long)a0;
- (long long)compareContactsTopHitCandidate:(id)a0;
- (long long)compareWithCCCDTopHitCandidate:(id)a0;
- (float)matchScoreForHelpWithEvaluator:(id)a0;
- (float)matchScoreForTipsWithEvaluator:(id)a0;
- (void)populateParsecRemainingFeatures;
- (int)preferencePriorityFromIdentity:(id)a0;
- (unsigned long long)attrCountPrefix2:(unsigned long long)a0;
- (unsigned long long)attrCountPrefix3:(unsigned long long)a0;
- (unsigned long long)attrCountPrefix:(unsigned long long)a0;
- (unsigned long long)attrCountPrefixLast2:(unsigned long long)a0;
- (unsigned long long)attrCountPrefixLast3:(unsigned long long)a0;
- (unsigned long long)attrCountPrefixLast:(unsigned long long)a0;
- (unsigned long long)attrCountWord:(unsigned long long)a0;
- (unsigned long long)attrType:(id)a0 seenAuthorEmail:(BOOL)a1 seenPrimaryRecipientEmail:(BOOL)a2;
- (unsigned long long)bundleIDType;
- (long long)compare:(id)a0 currentTime:(double)a1;
- (long long)compareAppsTopHitCandidate:(id)a0;
- (long long)compareLocalTopHitCandidate:(id)a0;
- (long long)compareParsecTopHitCandidate:(id)a0;
- (long long)comparePeopleItemTopHitCandidate:(id)a0;
- (long long)compareSafariTopHitCandidate:(id)a0;
- (id)dataCollectionBundle;
- (BOOL)didMatchRankingDescriptor:(id)a0;
- (float)engagementScoreWithEvaluator:(id)a0 currentTime:(double)a1 launchString:(id)a2 topicalityScore:(float)a3;
- (id)getBundleSpecificValue:(id)a0 forPropertyName:(id)a1 withQueryString:(id)a2 isCJK:(BOOL)a3 isBullseyeSearch:(BOOL)a4 withEvaluator:(id)a5 keyboardLanguage:(id)a6 seenAuthorEmail:(BOOL)a7 seenPrimaryRecipientEmail:(BOOL)a8;
- (float)inSpotlightEngagementScoreWithEvaluator:(id)a0 currentTime:(double)a1 queriesInSpotlight:(id)a2 datesInSpotlight:(id)a3 queriesInSpotlightNonUnique:(id)a4 datesInSpotlightNonUnique:(id)a5 launchString:(id)a6 lastUsedDate:(id)a7 topicalityScore:(float)a8;
- (void)inferDateBinsFromDates:(id)a0 intoBins:(int *)a1;
- (id)initForParsecResultWithBundleID:(id)a0;
- (id)initWithAttrs:(struct { long long x0; unsigned long long x1[4]; unsigned long long x2[4]; unsigned long long x3[4]; void *x4[0]; } *)a0;
- (id)initWithAttrs:(struct { long long x0; unsigned long long x1[4]; unsigned long long x2[4]; unsigned long long x3[4]; void *x4[0]; } *)a0 isServerAlternativeResult:(BOOL)a1;
- (BOOL)isAssociatedWithTophitContactsFromItems:(id)a0;
- (BOOL)isCCCD;
- (BOOL)isGoodMatchAppAlternateName:(id)a0 withEvaluator:(id)a1;
- (BOOL)isGoodPhotosMatch;
- (BOOL)isInSectionWithRankCategory:(id)a0;
- (BOOL)isPerfectMatch;
- (BOOL)isSearchResultPage:(id)a0;
- (id)likelyDisplayTitle;
- (id)mailFreshnessDate;
- (float)matchScoreAppName:(id)a0 withEvaluator:(id)a1;
- (float)matchScoreAppName:(id)a0 withEvaluator:(id)a1 matchOption:(unsigned char)a2;
- (float)matchScoreContactsEmailAddress:(id)a0 withEvaluator:(id)a1;
- (float)matchScoreContactsName:(id)a0 withEvaluator:(id)a1;
- (float)matchScoreFileName:(id)a0 withEvaluator:(id)a1;
- (float)matchScoreForApplicationsWithEvaluator:(id)a0;
- (float)matchScoreForBooksWithEvaluator:(id)a0;
- (float)matchScoreForCalendarWithEvaluator:(id)a0;
- (float)matchScoreForContactsWithEvaluator:(id)a0;
- (float)matchScoreForDictionaryWithEvaluator:(id)a0;
- (float)matchScoreForFilesWithEvaluator:(id)a0;
- (float)matchScoreForMusicWithEvaluator:(id)a0;
- (float)matchScoreForNotesWithEvaluator:(id)a0;
- (float)matchScoreForPeopleItemsWithEvaluator:(id)a0;
- (float)matchScoreForPreferencesWithEvaluator:(id)a0;
- (float)matchScoreForPreferencesWithEvaluator:(id)a0 subject:(id)a1 isFirstParty:(BOOL)a2 preferencePriority:(int)a3;
- (float)matchScoreForPreferencesWithEvaluator:(id)a0 subject:(id)a1 preferenceType:(id)a2 preferenceId:(id)a3;
- (float)matchScoreForSafariWithEvaluator:(id)a0;
- (float)matchScoreForShortcutsAppWithEvaluator:(id)a0;
- (float)matchScoreForShortcutsSettingWithEvaluator:(id)a0 name:(id)a1 preferencePriority:(int)a2;
- (float)matchScoreForShortcutsWithEvaluator:(id)a0;
- (float)matchScoreForWalletWithEvaluator:(id)a0;
- (float)matchScoreSettings:(id)a0 withEvaluator:(id)a1 matchOption:(unsigned char)a2;
- (float)matchScoreTitle:(id)a0 withEvaluator:(id)a1;
- (float)matchScoreTitle:(id)a0 withEvaluator:(id)a1 matchOption:(unsigned char)a2;
- (float)matchScoreURLString:(id)a0 withEvaluator:(id)a1;
- (id)moreRecentDateFromDate1:(id)a0 date2:(id)a1;
- (float)mostRecentTimeToQueryInMinutesWithCurrentTime:(double)a0 topicality:(float)a1;
- (void)parsePreferenceIdentity:(id)a0 withHandler:(id /* block */)a1;
- (void)populateBundleSpecificFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 currentTime:(double)a1;
- (void)populateContactFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 currentTime:(double)a1;
- (void)populateCrossAttributeDerivedFeaturesWithContext:(struct prs_feature_population_ctx_t { struct __CFArray *x0; struct __CFArray *x1; struct __CFArray *x2; unsigned char x3; float x4[28]; float x5; float x6; float x7; float x8; unsigned int x9; unsigned long long x10; unsigned long long x11; long long x12; unsigned long long x13; } *)a0 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a1;
- (void)populateMailFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0;
- (void)populateOnlySodiumMailFeatures;
- (void)populateOtherFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 withEvaluator:(id)a1 currentTime:(double)a2;
- (void)populateParsecAlbumFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 currentTime:(double)a1 forParsecResult:(id)a2;
- (void)populateParsecAnyFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 currentTime:(double)a1 forParsecResult:(id)a2;
- (void)populateParsecAppFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 currentTime:(double)a1 forParsecResult:(id)a2;
- (void)populateParsecBundleSpecificFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 currentTime:(double)a1 forParsecResult:(id)a2;
- (void)populateParsecEPubBookFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 currentTime:(double)a1 forParsecResult:(id)a2;
- (void)populateParsecMovieFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 currentTime:(double)a1 forParsecResult:(id)a2;
- (void)populateParsecPodcastFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 currentTime:(double)a1 forParsecResult:(id)a2;
- (void)populateParsecProfileFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 currentTime:(double)a1 forParsecResult:(id)a2;
- (void)populateParsecRoundTripFeatures:(id)a0 forParsecResult:(id)a1;
- (void)populateParsecSongFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 currentTime:(double)a1 forParsecResult:(id)a2;
- (void)populateParsecTvShowFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 currentTime:(double)a1 forParsecResult:(id)a2;
- (void)populateParsecWebVideoFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 currentTime:(double)a1 forParsecResult:(id)a2;
- (void)populatePortraitScore:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0 scorer:(id)a1 attributeHolder:(id)a2;
- (void)populateRemainingFeaturesWithRanker:(id)a0;
- (void)populateSMSFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0;
- (void)populateTextContentDistanceMeasures:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a0;
- (void)populateTextFeatureValuesForProperty:(id)a0 updatingBundleFeatureValues:(float[0] *)a1 propertyIndex:(unsigned long long)a2 withEvaluator:(id)a3 withContext:(struct prs_feature_population_ctx_t { struct __CFArray *x0; struct __CFArray *x1; struct __CFArray *x2; unsigned char x3; float x4[28]; float x5; float x6; float x7; float x8; unsigned int x9; unsigned long long x10; unsigned long long x11; long long x12; unsigned long long x13; } *)a4 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a5 propertyCanFuzzyMatch:(BOOL)a6 keyboardLanguage:(id)a7 isCJK:(BOOL)a8 featureList:(const unsigned short *)a9 propertyName:(id)a10 seenAuthorEmail:(BOOL)a11 seenPrimaryRecipientEmail:(BOOL)a12;
- (void)populateTextFeatureValuesForProperty:(id)a0 updatingBundleFeatureValues:(float[0] *)a1 propertyIndex:(unsigned long long)a2 withEvaluator:(id)a3 withContext:(struct prs_feature_population_ctx_t { struct __CFArray *x0; struct __CFArray *x1; struct __CFArray *x2; unsigned char x3; float x4[28]; float x5; float x6; float x7; float x8; unsigned int x9; unsigned long long x10; unsigned long long x11; long long x12; unsigned long long x13; } *)a4 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a5 propertyCanFuzzyMatch:(BOOL)a6 keyboardLanguage:(id)a7 isCJK:(BOOL)a8 propertyName:(id)a9 seenAuthorEmail:(BOOL)a10 seenPrimaryRecipientEmail:(BOOL)a11;
- (id)rankingFeedbackBundleID;
- (void)resetScoreForShortcutsSetting:(id)a0;
- (BOOL)serializeToJSON:(void *)a0 valuesOnly:(BOOL)a1;
- (void)setBundleIDType:(unsigned long long)a0;
- (void)setSuggestionBundleIDType;
- (float)staleDemotionWithCurrentTime:(double)a0 topicality:(float)a1;
- (float)topicalityScoreWithEvaluator:(id)a0;
- (void)updateAccumulatedBundleFeatures:(float *)a0 values:(float *)a1 feature:(unsigned long long)a2;
- (void)updateAttrCountsPrefix2:(unsigned short *)a0 queryTermCount:(unsigned long long)a1 attrType:(unsigned long long)a2;
- (void)updateAttrCountsPrefix3:(unsigned short *)a0 queryTermCount:(unsigned long long)a1 attrType:(unsigned long long)a2;
- (void)updateAttrCountsPrefix:(unsigned short *)a0 queryTermCount:(unsigned long long)a1 attrType:(unsigned long long)a2;
- (void)updateAttrCountsPrefixLast2:(unsigned short *)a0 termsDidMatchPrefix:(unsigned short *)a1 queryTermCount:(unsigned long long)a2 attrType:(unsigned long long)a3;
- (void)updateAttrCountsPrefixLast3:(unsigned short *)a0 termsDidMatchPrefix:(unsigned short *)a1 queryTermCount:(unsigned long long)a2 attrType:(unsigned long long)a3;
- (void)updateAttrCountsPrefixLast:(unsigned short *)a0 termsDidMatchPrefix:(unsigned short *)a1 queryTermCount:(unsigned long long)a2 attrType:(unsigned long long)a3;
- (void)updateAttrCountsWord2:(unsigned short *)a0 queryTermCount:(unsigned long long)a1 attrType:(unsigned long long)a2;
- (void)updateAttrCountsWord3:(unsigned short *)a0 queryTermCount:(unsigned long long)a1 attrType:(unsigned long long)a2;
- (void)updateAttrCountsWord:(unsigned short *)a0 queryTermCount:(unsigned long long)a1 attrType:(unsigned long long)a2;
- (void)updateBundleFeatures:(float *)a0 withArrValues:(float[0] *)a1 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a2;
- (void)updateNumScoreDescriptorBundleFeatures:(float *)a0 feature:(unsigned long long)a1 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x0; float *x1; unsigned long long x2; unsigned long long x3; } *)a2;
- (void)updateScoreDescriptorBundleFeatures:(float *)a0 feature:(unsigned long long)a1;

@end
