@class LPLinkMetadata;

@interface CKWorkoutMediaObject : CKMediaObject

@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (nonatomic) double cachedWidth;
@property (nonatomic) char cachedOrientation;

+ (id)UTITypes;
+ (BOOL)canGeneratePreviewInMVSHostProcess;
+ (BOOL)isPreviewable;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;

- (int)mediaType;
- (void).cxx_destruct;
- (BOOL)_isCachedFileLocationValid;
- (id)attachmentSummary:(unsigned long long)a0;
- (Class)balloonViewClass;
- (BOOL)generatePreviewOutOfProcess;
- (id)linkMetadataForWidth:(double)a0 orientation:(char)a1;
- (id)metricsCollectorMediaType;
- (Class)placeholderBalloonViewClass;
- (Class)previewBalloonViewClass;

@end
