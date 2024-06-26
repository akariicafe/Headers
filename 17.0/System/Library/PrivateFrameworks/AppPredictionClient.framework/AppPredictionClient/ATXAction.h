@class NSUUID, NSString, ATXAVRouteInfo, ATXLazyIntent, NSDictionary, NSUserActivity, CSSearchableItemAttributeSet, INIntent, ATXActionCriteria, NSNumber, UAUserActivityProxy;

@interface ATXAction : NSObject <BMStoreData, CRContent, ATXLazyIntentDelegateProtocol, NSSecureCoding, NSCopying, ATXSuggestionExecutableProtocol, ATXProtoBufWrapper, ATXMemoryPressureObserver> {
    NSUserActivity *_userActivity;
    unsigned long long _userActivityHash;
    NSString *_title;
    NSString *_subtitle;
    NSString *_languageCode;
    ATXActionCriteria *_criteria;
    ATXLazyIntent *_lazyIntent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userActivityString;
@property (readonly, nonatomic) CSSearchableItemAttributeSet *contentAttributeSet;
@property (readonly, nonatomic) ATXAVRouteInfo *routeInfo;
@property (readonly, nonatomic) NSNumber *cachedHash;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) ATXActionCriteria *criteria;
@property (readonly, nonatomic) NSUUID *actionUUID;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSString *heuristic;
@property (readonly, nonatomic) NSDictionary *heuristicMetadata;
@property (readonly, nonatomic) BOOL isHeuristic;
@property (readonly, nonatomic) BOOL isFutureMedia;
@property (readonly, nonatomic) BOOL isTVWhiteListedLongFormMedia;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) UAUserActivityProxy *userActivityProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)atx_setAlarmActionWithTitle:(id)a0 subtitle:(id)a1 eventIdentifier:(id)a2 eventTitle:(id)a3 alarmDate:(id)a4 heuristicName:(id)a5;
+ (id)webUrlParsedForUserActivityWithUrlString:(id)a0;
+ (BOOL)_isTVIntent:(id)a0 bundleId:(id)a1;
+ (id)atx_showCheckInActionWithTeamId:(id)a0 userActivityString:(id)a1 subtitle:(id)a2 overrideBundleId:(id)a3 suggestedEventUniqueKey:(id)a4 heuristicName:(id)a5 criteria:(id)a6;
+ (id)getActionKeyForBundleId:(id)a0 actionType:(id)a1;
+ (id)getDateFromUserActivityString:(id)a0 forActionKey:(id)a1;
+ (id)atx_startAudioCallActionWithTitle:(id)a0 subtitle:(id)a1 recipientName:(id)a2 recipientHandle:(id)a3 callService:(id)a4 contactIdentifier:(id)a5 eventIdentifier:(id)a6 heuristicName:(id)a7;
+ (id)atx_doNotDisturbForEventActionWithTitle:(id)a0 subtitle:(id)a1 eventTitle:(id)a2 eventIdentifier:(id)a3 eventUniqueID:(id)a4 heuristicName:(id)a5;
+ (id)atx_sendMessageActionWithTitle:(id)a0 subtitle:(id)a1 recipientName:(id)a2 recipientHandle:(id)a3 text:(id)a4 contactIdentifier:(id)a5 conversationIdentifier:(id)a6 eventIdentifier:(id)a7 heuristicName:(id)a8;
+ (unsigned long long)_userActivityHashForUserInfoDict:(id)a0 activityType:(id)a1 webpageURL:(id)a2;
+ (id)actionFromProactiveSuggestion:(id)a0;
+ (id)unarchivedActionFromData:(id)a0;
+ (id)getNSUATypefromActivityType:(id)a0;
+ (id)atx_doNotDisturbForCurrentLocationActionWithTitle:(id)a0 subtitle:(id)a1 heuristicName:(id)a2;
+ (id)atx_showCheckInActionWithTeamId:(id)a0 userActivityString:(id)a1 subtitle:(id)a2 overrideBundleId:(id)a3 suggestedEventUniqueKey:(id)a4 heuristicName:(id)a5;
+ (id)atx_startCallActionWithTitle:(id)a0 subtitle:(id)a1 recipientName:(id)a2 recipientHandle:(id)a3 callService:(id)a4 contactIdentifier:(id)a5 eventIdentifier:(id)a6 heuristicName:(id)a7 mediaType:(id)a8;
+ (id)atx_userActivityActionWithBestAppSuggestion:(id)a0 title:(id)a1 subtitle:(id)a2 bundleID:(id)a3 activityType:(id)a4 heuristicName:(id)a5;
+ (id)atx_startVideoCallActionWithTitle:(id)a0 subtitle:(id)a1 recipientName:(id)a2 recipientHandle:(id)a3 callService:(id)a4 contactIdentifier:(id)a5 eventIdentifier:(id)a6 heuristicName:(id)a7;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)_extractValueInKeyValueBlob:(id)a0 withKey:(id)a1;
+ (id)atx_userActivityActionWithTitle:(id)a0 subtitle:(id)a1 bundleID:(id)a2 activityType:(id)a3 urlString:(id)a4 userInfo:(id)a5 heuristicName:(id)a6;
+ (id)atx_setAirplaneModeActionWithTitle:(id)a0 subtitle:(id)a1;
+ (id)atx_updateAlarmActionWithTitle:(id)a0 subtitle:(id)a1 alarmID:(id)a2 alarmTitle:(id)a3 heuristicName:(id)a4;

- (unsigned long long)_hash;
- (id)_title;
- (void)setCriteria:(id)a0;
- (unsigned long long)userActivityHash;
- (id)_initWithCoder:(id)a0;
- (void)handleMemoryPressure;
- (void)setTitleForSerializationToCache;
- (id)initWithProto:(id)a0;
- (id)_subtitle;
- (id)initWithNSUserActivityString:(id)a0 actionUUID:(id)a1 bundleId:(id)a2 itemIdentifier:(id)a3 contentAttributeSet:(id)a4 heuristic:(id)a5 heuristicMetadata:(id)a6 isFutureMedia:(BOOL)a7 title:(id)a8 subtitle:(id)a9;
- (id)init;
- (void)dealloc;
- (id)archivedDataForAction;
- (unsigned long long)hashSlotSetWithNonNilParameters:(id)a0;
- (id)predictionTypeStringForPET;
- (id)encodeAsProto;
- (id)actionTitle;
- (id)proto;
- (void)setHeuristic:(id)a0;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void)setSubtitleForSerializationToCache;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_shouldUseCachedTitle:(id)a0 cachedLanguageCode:(id)a1;
- (void)setLaunchIdForIntent:(id)a0;
- (id)dateForAction;
- (id)actionWithRouteInfo:(id)a0;
- (id)_bundleIdForDisplay;
- (void)_setUserActivityHash:(unsigned long long)a0;
- (id)copyWithParameterWhitelist:(id)a0;
- (id)actionKey;
- (id)_spotlightContentType;
- (id)slotSet;
- (id)json;
- (id)underlyingInteraction;
- (BOOL)isEqualToAction:(id)a0;
- (id)userActivityWebpageURL;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 actionUUID:(id)a1 bundleId:(id)a2 heuristic:(id)a3 heuristicMetadata:(id)a4 criteria:(id)a5 isFutureMedia:(BOOL)a6 title:(id)a7 subtitle:(id)a8;
- (BOOL)hasActionTitle;
- (id)actionDescription;
- (id)initWithNSUserActivity:(id)a0 actionUUID:(id)a1 bundleId:(id)a2 contentAttributeSet:(id)a3 itemIdentifier:(id)a4 heuristic:(id)a5 heuristicMetadata:(id)a6 criteria:(id)a7 isFutureMedia:(BOOL)a8 title:(id)a9 subtitle:(id)a10;
- (BOOL)isTVAction;
- (void)didDeserializeIntent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initFromBestAppSuggestion:(id)a0 activity:(id)a1 actionUUID:(id)a2 bundleId:(id)a3 contentAttributeSet:(id)a4 itemIdentifier:(id)a5 heuristic:(id)a6 heuristicMetadata:(id)a7 criteria:(id)a8 isFutureMedia:(BOOL)a9 title:(id)a10 subtitle:(id)a11;
- (id)initWithCoder:(id)a0;
- (unsigned long long)paramHash;
- (void)invalidateCachedHash;
- (id)initWithActivityProxy:(id)a0 activity:(id)a1 activityString:(id)a2 itemIdentifier:(id)a3 contentAttributeSet:(id)a4 intent:(id)a5 actionUUID:(id)a6 bundleId:(id)a7 type:(unsigned long long)a8 heuristic:(id)a9 heuristicMetadata:(id)a10 criteria:(id)a11 isFutureMedia:(BOOL)a12 routeInfo:(id)a13 title:(id)a14 subtitle:(id)a15 languageCode:(id)a16 cachedHash:(id)a17;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionSubtitle;

@end
