@class NSString, NSMutableDictionary;

@interface PXAnalyticsSlideshowUsageDestination : NSObject <CPAnalyticsDestinationProtocol> {
    NSMutableDictionary *_slideshowInfos;
}

@property (class, readonly, nonatomic) NSString *playbackStartedCoreAnalyticsEventName;
@property (class, readonly, nonatomic) NSString *playbackEndedCoreAnalyticsEventName;
@property (class, readonly, nonatomic) NSString *payloadTotalAssetCountKey;
@property (class, readonly, nonatomic) NSString *payloadPauseCountKey;
@property (class, readonly, nonatomic) NSString *payloadTimePausedKey;
@property (class, readonly, nonatomic) NSString *payloadTotalPlaybackTimeKey;
@property (class, readonly, nonatomic) NSString *payloadTimeFractionPlayedKey;
@property (class, readonly, nonatomic) NSString *payloadAppSuspensionCountKey;
@property (class, readonly, nonatomic) NSString *exportEndedCoreAnalyticsEventName;
@property (class, readonly, nonatomic) NSString *exportFailedCPAnalyticsEventName;
@property (class, readonly, nonatomic) NSString *exportCPAnalyticsIntervalName;
@property (class, readonly, nonatomic) NSString *payloadExportEndStateKey;
@property (class, readonly, nonatomic) NSString *payloadExportErrorDomainKey;
@property (class, readonly, nonatomic) NSString *payloadExportErrorCodeKey;
@property (class, readonly, nonatomic) NSString *payloadExportDurationKey;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportEndedCPAnalyticsEventNameForSuccess:(BOOL)a0 error:(id)a1 duration:(double)a2;
+ (id)playbackEndedCPAnalyticsEventNameForTimeFractionPlayed:(double)a0;
+ (id)playbackEndedCPAnalyticsEventNameForTerminationType:(long long)a0;
+ (id)payloadAssetCountKeyForPlaybackStyle:(long long)a0;
+ (id)playbackStartedCPAnalyticsEventNameForTotalAssetCount:(long long)a0;
+ (BOOL)_isUserCancelledError:(id)a0;

- (id)_createDefaultPayloadForInfo:(id)a0;
- (id)init;
- (id)_existingInfoForEvent:(id)a0 pop:(BOOL)a1;
- (id)_createInfoForEvent:(id)a0;
- (id)_existingInfoForEvent:(id)a0;
- (void).cxx_destruct;
- (id)_popInfoForEndEvent:(id)a0;
- (id)_payloadFilteredForCoreAnlaytics:(id)a0;
- (void)processEvent:(id)a0;

@end
