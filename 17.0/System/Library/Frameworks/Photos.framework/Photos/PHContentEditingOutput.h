@class UTType, NSString, NSURL, NSData, NSArray, PHAdjustmentData, NSMutableSet, PHContentEditingOutputRequestOptions, NSNumber;

@interface PHContentEditingOutput : NSObject <NSSecureCoding> {
    PHAdjustmentData *_adjustmentData;
    long long _baseVersion;
    NSMutableSet *_deliveredRenderedContentURLs;
    NSURL *_appropriateURLForDerivingRenderedContentURLs;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PHContentEditingOutputRequestOptions *requestOptions;
@property long long baseVersion;
@property (retain, nonatomic) NSNumber *originalResourceChoice;
@property (nonatomic) BOOL isSubstandardRender;
@property (nonatomic) long long fullSizeRenderWidth;
@property (nonatomic) long long fullSizeRenderHeight;
@property (nonatomic) double fullSizeRenderDuration;
@property (copy) NSURL *renderedContentURL;
@property (retain) NSData *penultimateRenderedJPEGData;
@property (copy) NSURL *penultimateRenderedVideoContentURL;
@property (copy) NSURL *renderedVideoPosterURL;
@property (copy) NSURL *renderedVideoComplementContentURL;
@property (copy) NSURL *penultimateRenderedVideoComplementContentURL;
@property (retain) NSURL *editorBundleURL;
@property (readonly) long long mediaType;
@property (readonly, getter=isLoopingLivePhoto) BOOL loopingLivePhoto;
@property (retain, nonatomic) NSURL *renderedPreviewContentURL;
@property (nonatomic) BOOL isAsyncAdjustment;
@property (retain, nonatomic) NSNumber *playbackVariation;
@property (retain, nonatomic) NSNumber *videoDuration;
@property (retain, nonatomic) NSNumber *reframeVariation;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (retain) PHAdjustmentData *adjustmentData;
@property (readonly, copy) UTType *defaultRenderedContentType;
@property (readonly, copy) NSArray *supportedRenderedContentTypes;

+ (BOOL)_currentDeviceSupportsHEICEncoding;
+ (id)_renderURLWithExtensionForMediaType:(long long)a0 useHEICImage:(BOOL)a1 appropriateForURL:(id)a2;
+ (id)_renderURLWithExtensionForUniformTypeIdentifierType:(id)a0 appropriateForURL:(id)a1;
+ (id)defaultExtensionForUniformTypeIdentifierType:(id)a0;
+ (id)imageRenderURLUsingHEICFormat:(BOOL)a0 appropriateForURL:(id)a1;
+ (unsigned long long)maximumAdjustmentDataLength;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (void)_setupRequiredRenderedContentURLsWithEditingInput:(id)a0 options:(id)a1;
- (id)assetAdjustmentsWithEditorBundleID:(id)a0;
- (void)clearRenderedContentURL;
- (id)initWithAdjustmentBaseVersion:(long long)a0 mediaType:(long long)a1 appropriateForURL:(id)a2;
- (id)initWithContentEditingInput:(id)a0;
- (id)initWithContentEditingInput:(id)a0 withOptions:(id)a1;
- (id)initWithPlaceholderForCreatedAsset:(id)a0;
- (BOOL)isOnlyChangingOriginalChoice;
- (id)renderURLWithExtensionForMediaType:(long long)a0;
- (id)renderedContentURLForType:(id)a0 error:(id *)a1;
- (void)setRenderedJPEGData:(id)a0;
- (BOOL)shouldPreferHEICForRenderedImages;

@end
