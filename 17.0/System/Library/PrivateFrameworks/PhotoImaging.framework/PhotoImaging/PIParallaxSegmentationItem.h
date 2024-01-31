@class NSData, PFWallpaperCompoundDeviceConfiguration, PISegmentationContextInfo, NSArray, NSURL, PFPosterLayout, NSDictionary, PIParallaxColorAnalysis, PFParallaxLayerStyle, NSString, PFParallaxAssetResource, NUComposition;
@protocol PFParallaxAssetRegions, NUImageBuffer;

@interface PIParallaxSegmentationItem : NSObject <PISegmentationItem, NSCopying>

@property (copy, nonatomic) NSArray *_availableStyles;
@property (copy, nonatomic) NSArray *_defaultStyles;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSURL *segmentationDataURL;
@property (retain, nonatomic) PISegmentationContextInfo *contextInfo;
@property (retain, nonatomic) PFParallaxAssetResource *resource;
@property (retain, nonatomic) PFParallaxAssetResource *livePhotoResource;
@property (retain, nonatomic) NUComposition *composition;
@property (nonatomic) unsigned long long classification;
@property (retain, nonatomic) id<NUImageBuffer> segmentationMatte;
@property (retain, nonatomic) id<NUImageBuffer> segmentationConfidenceMap;
@property (retain, nonatomic) id<NUImageBuffer> segmentationBackground;
@property (retain, nonatomic) id<PFParallaxAssetRegions> regions;
@property (retain, nonatomic) PFPosterLayout *defaultLayout;
@property (retain, nonatomic) PFPosterLayout *originalLayout;
@property (retain, nonatomic) PFPosterLayout *settlingEffectLayout;
@property (copy, nonatomic) NSDictionary *scores;
@property (retain, nonatomic) PIParallaxColorAnalysis *colorAnalysis;
@property (copy, nonatomic) NSDictionary *localLightData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } settlingEffectNormalizedBounds;
@property (nonatomic) unsigned long long settlingEffectStatus;
@property (copy, nonatomic) NSData *settlingEffectVideoData;
@property (nonatomic) unsigned long long loadingState;
@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) PFWallpaperCompoundDeviceConfiguration *layoutConfiguration;
@property (readonly, nonatomic) BOOL isSettlingEffectAvailable;
@property (readonly, nonatomic) BOOL settlingEffectFailedAnyGating;
@property (readonly, nonatomic) BOOL settlingEffectHasInterestingMotion;
@property (readonly, nonatomic) NSArray *settlingEffectGatingDiagnostics;
@property (readonly, copy, nonatomic) NSArray *availableStyles;
@property (readonly, copy, nonatomic) NSArray *defaultStyles;
@property (readonly, nonatomic) PFParallaxLayerStyle *originalStyle;
@property (readonly, nonatomic) BOOL supportsSegmentedStyles;
@property (readonly, nonatomic) BOOL supportsBackgroundlessStyles;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) BOOL supportsManualClockIntersectionTolerance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)_settlingEffectDataLoadingBlock;
+ (id /* block */)_backgroundImageLoadingBlock;
+ (id /* block */)_matteImageLoadingBlock;
+ (id)dataForImageBuffer:(id)a0 error:(out id *)a1;
+ (id)imageBufferFromData:(id)a0 error:(out id *)a1;
+ (void)loadSettlingEffectVideoDataFromURL:(id)a0 completion:(id /* block */)a1;
+ (id)readImageBufferFromURL:(id)a0 error:(out id *)a1;
+ (BOOL)writeImageBuffer:(id)a0 toURL:(id)a1 error:(out id *)a2;

- (id)init;
- (void)_invalidateCachedData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromURL:(id)a0 error:(out id *)a1;
- (BOOL)saveToURL:(id)a0 error:(out id *)a1;
- (id)contentsDictionary;
- (BOOL)_loadSegmentationDataFromURL:(id)a0 error:(out id *)a1 matteImageLoadingBlock:(id /* block */)a2 backgroundImageLoadingBlock:(id /* block */)a3 settingEffectDataLoadingBlock:(id /* block */)a4;
- (void)_populateAvailableStyles;
- (void)_populateDefaultStyles;
- (id)adjustedStyleForHeadroom:(id)a0;
- (id)availableStyleOfKind:(id)a0;
- (id)defaultStyleOfKind:(id)a0;
- (BOOL)loadContentsFromDictionary:(id)a0 hasMatte:(BOOL *)a1 hasBackground:(BOOL *)a2 error:(out id *)a3;
- (BOOL)loadSegmentationDataFromURL:(id)a0 error:(out id *)a1;
- (void)resetSettlingEffectGatingFailure;
- (BOOL)saveAssetResourceToURL:(id)a0 error:(out id *)a1;
- (BOOL)saveSegmentationDataToURL:(id)a0 error:(out id *)a1;
- (id)suggestedStyleForCategory:(id)a0;
- (void)updateScores:(id)a0;

@end
