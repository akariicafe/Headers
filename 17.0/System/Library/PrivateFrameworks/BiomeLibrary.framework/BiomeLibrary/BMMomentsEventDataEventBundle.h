@class BMMomentsEventDataAction, NSString, NSArray, NSDate;

@interface BMMomentsEventDataEventBundle : BMEventBase <BMStoreData> {
    BOOL _hasRaw_bundleStartDate;
    double _raw_bundleStartDate;
    BOOL _hasRaw_bundleEndDate;
    double _raw_bundleEndDate;
    BOOL _hasRaw_bundleCreationDate;
    double _raw_bundleCreationDate;
    BOOL _hasRaw_bundleExpirationDate;
    double _raw_bundleExpirationDate;
    BOOL _hasRaw_suggestionTimestamp;
    double _raw_suggestionTimestamp;
    BOOL _hasRaw_appEntryEventTimestamp;
    double _raw_appEntryEventTimestamp;
    BOOL _hasRaw_appEntryEventStartTime;
    double _raw_appEntryEventStartTime;
    BOOL _hasRaw_appEntryEventEndTime;
    double _raw_appEntryEventEndTime;
    BOOL _hasRaw_clientActivityEventTimestamp;
    double _raw_clientActivityEventTimestamp;
}

@property (readonly, nonatomic) int bundlEngagement;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDate *bundleStartDate;
@property (readonly, nonatomic) NSDate *bundleEndDate;
@property (readonly, nonatomic) NSDate *bundleCreationDate;
@property (readonly, nonatomic) NSDate *bundleExpirationDate;
@property (readonly, nonatomic) int bundleInterfaceType;
@property (readonly, nonatomic) BOOL bundleSourceHealthExists;
@property (nonatomic) BOOL hasBundleSourceHealthExists;
@property (readonly, nonatomic) BOOL bundleSourcePhotoExists;
@property (nonatomic) BOOL hasBundleSourcePhotoExists;
@property (readonly, nonatomic) BOOL bundleSourceProactiveExists;
@property (nonatomic) BOOL hasBundleSourceProactiveExists;
@property (readonly, nonatomic) BOOL bundleSourceRoutineExists;
@property (nonatomic) BOOL hasBundleSourceRoutineExists;
@property (readonly, nonatomic) NSString *bundlePromptLanguageFormat;
@property (readonly, nonatomic) NSString *bundlePromptToneID;
@property (readonly, nonatomic) BOOL bundlePromptParametersAvailability;
@property (nonatomic) BOOL hasBundlePromptParametersAvailability;
@property (readonly, nonatomic) int bundlePlaceType;
@property (readonly, nonatomic) int bundlePlaceUserType;
@property (readonly, nonatomic) int bundleBaseEventCateory;
@property (readonly, nonatomic) NSArray *bundleEventIDs;
@property (readonly, nonatomic) BMMomentsEventDataAction *bundleActionType;
@property (readonly, nonatomic) NSArray *backgroundActions;
@property (readonly, nonatomic) BOOL bundleIsFamilyIncluded;
@property (nonatomic) BOOL hasBundleIsFamilyIncluded;
@property (readonly, nonatomic) int bundleTimeTag;
@property (readonly, nonatomic) BOOL isBundleResourceTypeUnknown;
@property (nonatomic) BOOL hasIsBundleResourceTypeUnknown;
@property (readonly, nonatomic) BOOL isBundleResourceTypeValueIncluded;
@property (nonatomic) BOOL hasIsBundleResourceTypeValueIncluded;
@property (readonly, nonatomic) BOOL isBundleResourceTypePhotoAssetsIncluded;
@property (nonatomic) BOOL hasIsBundleResourceTypePhotoAssetsIncluded;
@property (readonly, nonatomic) BOOL isBundleResourceTypeMediaIncluded;
@property (nonatomic) BOOL hasIsBundleResourceTypeMediaIncluded;
@property (readonly, nonatomic) BOOL isBundleResourceTypeWebLinkIncluded;
@property (nonatomic) BOOL hasIsBundleResourceTypeWebLinkIncluded;
@property (readonly, nonatomic) BOOL isBundleResourceTypeInterenceTagIncluded;
@property (nonatomic) BOOL hasIsBundleResourceTypeInterenceTagIncluded;
@property (readonly, nonatomic) double bundleVersion;
@property (nonatomic) BOOL hasBundleVersion;
@property (readonly, nonatomic) double rankingVersion;
@property (nonatomic) BOOL hasRankingVersion;
@property (readonly, nonatomic) int suggestionType;
@property (readonly, nonatomic) NSDate *suggestionTimestamp;
@property (readonly, nonatomic) NSString *suggestionClientIdentifier;
@property (readonly, nonatomic) NSString *suggestionViewContainerName;
@property (readonly, nonatomic) double suggestionViewVisibleTime;
@property (nonatomic) BOOL hasSuggestionViewVisibleTime;
@property (readonly, nonatomic) int appEntryEventType;
@property (readonly, nonatomic) NSString *appEntryEventClientIdentifier;
@property (readonly, nonatomic) NSDate *appEntryEventTimestamp;
@property (readonly, nonatomic) NSDate *appEntryEventStartTime;
@property (readonly, nonatomic) NSDate *appEntryEventEndTime;
@property (readonly, nonatomic) int appEntryEventTotalCharacters;
@property (nonatomic) BOOL hasAppEntryEventTotalCharacters;
@property (readonly, nonatomic) int appEntryEventAddedCharacters;
@property (nonatomic) BOOL hasAppEntryEventAddedCharacters;
@property (readonly, nonatomic) int clientActivityEventType;
@property (readonly, nonatomic) NSString *clientActivityEventClientIdentifier;
@property (readonly, nonatomic) NSDate *clientActivityEventTimestamp;
@property (readonly, nonatomic) NSString *suggestionIdentifier;
@property (readonly, nonatomic) int photoSourceType;
@property (readonly, nonatomic) int photoLibraryType;
@property (readonly, nonatomic) BOOL bundleSourcePostAnalyticsExists;
@property (nonatomic) BOOL hasBundleSourcePostAnalyticsExists;
@property (readonly, nonatomic) BOOL bundleSourcePDExists;
@property (nonatomic) BOOL hasBundleSourcePDExists;
@property (readonly, nonatomic) BOOL bundleSourceMotionExists;
@property (nonatomic) BOOL hasBundleSourceMotionExists;
@property (readonly, nonatomic) BOOL bundleSourceBooksExists;
@property (nonatomic) BOOL hasBundleSourceBooksExists;
@property (readonly, nonatomic) BOOL bundleSourceScreenTimeExists;
@property (nonatomic) BOOL hasBundleSourceScreenTimeExists;
@property (readonly, nonatomic) NSArray *gaPRArray;
@property (readonly, nonatomic) int bundlePCount;
@property (nonatomic) BOOL hasBundlePCount;
@property (readonly, nonatomic) int ranking;
@property (readonly, nonatomic) int labelConfidenceScore;
@property (readonly, nonatomic) int timeCorrelationScore;
@property (readonly, nonatomic) int callDuration;
@property (readonly, nonatomic) int interactionCount;
@property (readonly, nonatomic) int interactionType;
@property (readonly, nonatomic) int callPlace;
@property (readonly, nonatomic) int distanceFromHome;
@property (readonly, nonatomic) int homeAvailability;
@property (readonly, nonatomic) int workAvailability;
@property (readonly, nonatomic) int bundleVisitMapItemSource;
@property (readonly, nonatomic) int bundleVisitPlaceType;
@property (readonly, nonatomic) int bundleVisitPlaceLabelGranularity;
@property (readonly, nonatomic) int bundleIncludesAnomalousEvent;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_backgroundActionsJSONArray;
- (id)_bundleEventIDsJSONArray;
- (id)_gaPRArrayJSONArray;
- (id)initWithBundleIdentifier:(id)a0 bundleStartDate:(id)a1 bundleEndDate:(id)a2 bundleCreationDate:(id)a3 bundleExpirationDate:(id)a4 bundleInterfaceType:(int)a5 bundleSourceHealthExists:(id)a6 bundleSourcePhotoExists:(id)a7 bundleSourceProactiveExists:(id)a8 bundleSourceRoutineExists:(id)a9 bundlePromptLanguageFormat:(id)a10 bundlePromptToneID:(id)a11 bundlePromptParametersAvailability:(id)a12 bundlePlaceType:(int)a13 bundlePlaceUserType:(int)a14 bundleBaseEventCateory:(int)a15 bundleEventIDs:(id)a16 bundleActionType:(id)a17 backgroundActions:(id)a18 bundleIsFamilyIncluded:(id)a19 bundleTimeTag:(int)a20 isBundleResourceTypeUnknown:(id)a21 isBundleResourceTypeValueIncluded:(id)a22 isBundleResourceTypePhotoAssetsIncluded:(id)a23 isBundleResourceTypeMediaIncluded:(id)a24 isBundleResourceTypeWebLinkIncluded:(id)a25 isBundleResourceTypeInterenceTagIncluded:(id)a26 bundlEngagement:(int)a27 bundleVersion:(id)a28 rankingVersion:(id)a29;
- (id)initWithBundleIdentifier:(id)a0 bundleStartDate:(id)a1 bundleEndDate:(id)a2 bundleCreationDate:(id)a3 bundleExpirationDate:(id)a4 bundleInterfaceType:(int)a5 bundleSourceHealthExists:(id)a6 bundleSourcePhotoExists:(id)a7 bundleSourceProactiveExists:(id)a8 bundleSourceRoutineExists:(id)a9 bundlePromptLanguageFormat:(id)a10 bundlePromptToneID:(id)a11 bundlePromptParametersAvailability:(id)a12 bundlePlaceType:(int)a13 bundlePlaceUserType:(int)a14 bundleBaseEventCateory:(int)a15 bundleEventIDs:(id)a16 bundleActionType:(id)a17 backgroundActions:(id)a18 bundleIsFamilyIncluded:(id)a19 bundleTimeTag:(int)a20 isBundleResourceTypeUnknown:(id)a21 isBundleResourceTypeValueIncluded:(id)a22 isBundleResourceTypePhotoAssetsIncluded:(id)a23 isBundleResourceTypeMediaIncluded:(id)a24 isBundleResourceTypeWebLinkIncluded:(id)a25 isBundleResourceTypeInterenceTagIncluded:(id)a26 bundlEngagement:(int)a27 bundleVersion:(id)a28 rankingVersion:(id)a29 suggestionType:(int)a30 suggestionTimestamp:(id)a31 suggestionClientIdentifier:(id)a32 suggestionViewContainerName:(id)a33 suggestionViewVisibleTime:(id)a34 appEntryEventType:(int)a35 appEntryEventClientIdentifier:(id)a36 appEntryEventTimestamp:(id)a37 appEntryEventStartTime:(id)a38 appEntryEventEndTime:(id)a39 appEntryEventTotalCharacters:(id)a40 appEntryEventAddedCharacters:(id)a41 clientActivityEventType:(int)a42 clientActivityEventClientIdentifier:(id)a43 clientActivityEventTimestamp:(id)a44 suggestionIdentifier:(id)a45 photoSourceType:(int)a46 photoLibraryType:(int)a47 bundleSourcePostAnalyticsExists:(id)a48 bundleSourcePDExists:(id)a49 bundleSourceMotionExists:(id)a50 bundleSourceBooksExists:(id)a51 bundleSourceScreenTimeExists:(id)a52 gaPRArray:(id)a53 bundlePCount:(id)a54 ranking:(int)a55 labelConfidenceScore:(int)a56 timeCorrelationScore:(int)a57 callDuration:(int)a58 interactionCount:(int)a59 interactionType:(int)a60 callPlace:(int)a61 distanceFromHome:(int)a62 homeAvailability:(int)a63 workAvailability:(int)a64 bundleVisitMapItemSource:(int)a65 bundleVisitPlaceType:(int)a66 bundleVisitPlaceLabelGranularity:(int)a67 bundleIncludesAnomalousEvent:(int)a68;

@end
