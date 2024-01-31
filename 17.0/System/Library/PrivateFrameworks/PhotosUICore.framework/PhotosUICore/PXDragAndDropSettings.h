@interface PXDragAndDropSettings : PXSettings

@property (nonatomic) BOOL useData;
@property (nonatomic) BOOL dragOutEnabled;
@property (nonatomic) BOOL alwaysAllowDragsWithinUserAlbums;
@property (nonatomic) BOOL springLoadingEnabled;
@property (nonatomic) BOOL useFileProvider;
@property (nonatomic) long long reorderCadence;
@property (nonatomic) double dropGestureSpeedLimit;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
