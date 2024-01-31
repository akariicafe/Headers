@class NSArray, NSURL, NSString;

@interface CKAudioMediaObject : CKAVMediaObject <CKMediaObjectMetadataPreview>

@property (retain, nonatomic) NSArray *powerLevelsFromMetadata;
@property (nonatomic) double durationFromMetadata;
@property (retain, nonatomic) NSURL *temporaryFileURL;
@property (nonatomic) long long totalPacketsCount;
@property (retain, nonatomic) NSArray *powerLevels;
@property (readonly, nonatomic, getter=isAudioMessage) BOOL audioMessage;
@property (readonly, nonatomic) BOOL supportsPreviewMetadata;
@property (readonly, copy, nonatomic) NSString *previewMetadataFilenameExtension;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (void)_cachePowerLevels:(id)a0 forKey:(id)a1;
+ (id)_cachedPowerLevelsForKey:(id)a0;
+ (id)fallbackFilenamePrefix;
+ (id)generateThumbnailForPowerLevelsFromMetadata:(id)a0 color:(id)a1;
+ (id)generateThumbnailForWidth:(double)a0 color:(id)a1 powerLevels:(id)a2 fileURL:(id)a3;
+ (id)generateWaveformFromPowerLevels:(double *)a0 powerLevelsCount:(unsigned long long)a1 color:(id)a2;
+ (BOOL)isPreviewable;
+ (void)normalizedPowerLevelsForPowerValues:(id)a0 powerLevelsCount:(unsigned long long)a1 powerLevels:(double *)a2;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;

- (int)mediaType;
- (void).cxx_destruct;
- (double)duration;
- (BOOL)canExport;
- (id)previewItemTitle;
- (void)restorePreviewMetadataFromDict:(id)a0;
- (void)setPowerLevels:(id)a0;
- (id)attachmentSummary:(unsigned long long)a0;
- (Class)balloonViewClass;
- (id)composeWaveformForWidth:(double)a0 orientation:(char)a1;
- (id)composeWaveformForWidth:(double)a0 orientation:(char)a1 withColor:(id)a2;
- (id)generatePlaceholderThumbnailForWidth:(double)a0;
- (id)generatePlaceholderThumbnailForWidth:(double)a0 withColor:(id)a1;
- (id)generatePreviewFromThumbnail:(id)a0 width:(double)a1 orientation:(char)a2;
- (id)generatePreviewFromThumbnail:(id)a0 width:(double)a1 orientation:(char)a2 withColor:(id)a3;
- (id)generateThumbnailForWidth:(double)a0;
- (id)generateThumbnailForWidth:(double)a0 withColor:(id)a1;
- (BOOL)isPreviewable;
- (id)metricsCollectorMediaType;
- (id)powerLevels;
- (id)previewFilenameExtension;
- (id)previewMetadataWithContentsOfURL:(id)a0 error:(out id *)a1;
- (void)savePreview:(id)a0 toURL:(id)a1 forOrientation:(char)a2;
- (id)savedPreviewFromURL:(id)a0 forOrientation:(char)a1;
- (BOOL)shouldBeQuickLooked;
- (BOOL)shouldSuppressPreview;
- (BOOL)supportsUnknownSenderPreview;
- (id)temporaryWaveformWithWidth:(double)a0 orientation:(char)a1;
- (id)waveformForOrientation:(char)a0;
- (BOOL)writePreviewMetadata:(id)a0 toURL:(id)a1 error:(out id *)a2;

@end
