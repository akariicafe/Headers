@interface MRUFeatureFlagProvider : NSObject

@property (class, readonly, nonatomic) BOOL isDynamicCoversheetEnabled;
@property (class, readonly, nonatomic) BOOL isRelativeVolumeUIEnabled;
@property (class, readonly, nonatomic) BOOL isAutobahnEnabled;
@property (class, readonly, nonatomic) BOOL isFavoritesEnabled;
@property (class, readonly, nonatomic) BOOL isQuickControlsLiveWaveformEnabled;
@property (class, readonly, nonatomic) BOOL isPlatterLiveWaveformEnabled;
@property (class, readonly, nonatomic) BOOL isMediaSuggestionsPushEnabled;
@property (class, readonly, nonatomic) BOOL isImageCachingEnabled;
@property (class, readonly, nonatomic) BOOL isSpatialOnAggregateDevices;
@property (class, readonly, nonatomic) BOOL isVolumeInputControlCenterEnabled;
@property (class, readonly, nonatomic) BOOL isDominoAttentionEnabled;
@property (class, readonly, nonatomic) BOOL isNewVolumeControlsMediaControlsEnabled;
@property (class, readonly, nonatomic) BOOL isRoutePickerNotCollapseGroupAutomaticallyEnabled;
@property (class, readonly, nonatomic) BOOL isArtworkControllerEnabled;

@end
