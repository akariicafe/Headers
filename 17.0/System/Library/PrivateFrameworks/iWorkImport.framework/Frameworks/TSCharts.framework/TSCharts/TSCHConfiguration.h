@class NSString, TSSPropertyMap;

@interface TSCHConfiguration : NSObject

@property (nonatomic) BOOL supportsChartDataEditor;
@property (nonatomic) BOOL supportsChartRangeEditingMode;
@property (nonatomic) BOOL supportsNumberFormatSameAsSource;
@property (nonatomic) BOOL showMessageOnSelection;
@property (nonatomic) BOOL disableHighQualityRenderingIfNecessary;
@property (nonatomic) BOOL supports3DFillDataEmbeddingRecovery;
@property (nonatomic) BOOL use3DFillFor3DChartFallback;
@property (nonatomic) BOOL shouldForceDiscreteGraphicsFor3D;
@property (nonatomic) BOOL exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
@property (nonatomic) BOOL supportsTextBackground;
@property (nonatomic) BOOL supportsTextWrapping;
@property (retain, nonatomic) Class multiDataChartOptionsControllerBuildSupportClass;
@property (copy, nonatomic) NSString *modifyChartDataHelpKey;
@property (nonatomic) long long analyticsAppType;
@property (readonly) TSSPropertyMap *appSpecificPropertyOverrides;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)sharedChartConfiguration;
+ (void)resetSharedChartConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
