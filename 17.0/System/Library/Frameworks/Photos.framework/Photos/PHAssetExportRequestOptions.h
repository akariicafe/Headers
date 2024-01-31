@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PHAssetExportRequestOptions : NSObject

@property (nonatomic) long long locationComparisonStrategy;
@property (nonatomic) BOOL forceDateTimeMetadataBaking;
@property (nonatomic) BOOL forceLocationMetadataBaking;
@property (nonatomic) BOOL forceCaptionMetadataBaking;
@property (nonatomic) BOOL forceAccessibilityDescriptionMetadataBaking;
@property (nonatomic) BOOL disableUpdatingFileCreationDatesOnExportedFileURLs;
@property (nonatomic) BOOL includeAllAssetResources;
@property (nonatomic) long long variant;
@property (nonatomic) BOOL treatLivePhotoAsStill;
@property (nonatomic) BOOL flattenSlomoVideos;
@property (nonatomic) BOOL dontAllowRAW;
@property (nonatomic) BOOL shouldStripLocation;
@property (nonatomic) BOOL shouldStripCaption;
@property (nonatomic) BOOL shouldStripAccessibilityDescription;
@property (copy, nonatomic) NSString *videoExportPreset;
@property (copy, nonatomic) NSString *videoExportFileType;
@property (nonatomic) BOOL disableMetadataCorrections;
@property (nonatomic) BOOL allowMetadataConversionsForPNG;
@property (nonatomic) BOOL shouldExportUnmodifiedOriginalResources;
@property (nonatomic) BOOL shouldBundleComplexAssetResources;
@property (copy, nonatomic) NSString *customFilenameBase;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToAssetExportRequestOptions:(id)a0;

@end
