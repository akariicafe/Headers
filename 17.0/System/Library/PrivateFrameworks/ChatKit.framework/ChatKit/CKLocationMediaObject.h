@class NSString;

@interface CKLocationMediaObject : CKContactMediaObject <MKAnnotation>

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;
+ (id)placeholderPreviewCache;
+ (id)placeholderPreviewForWidth:(double)a0 orientation:(char)a1;
+ (id)vcardDataFromCLLocation:(id)a0;

- (id)mapItem;
- (int)mediaType;
- (id)previewItemTitle;
- (id)previewCacheKeyWithOrientation:(char)a0;
- (id)attachmentSummary:(unsigned long long)a0;
- (Class)balloonViewClass;
- (id)bbPreviewFillToSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })bbSize;
- (id)generatePlaceholderThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)generatePlaceholderThumbnailForWidth:(double)a0 orientation:(char)a1;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)initWithTransfer:(id)a0 context:(id)a1 forceInlinePreview:(BOOL)a2;
- (BOOL)isDroppedPin;
- (id)metricsCollectorMediaType;
- (id)pasteboardItemProvider;
- (Class)placeholderBalloonViewClass;
- (Class)previewBalloonViewClass;
- (id)previewCachesFileURLWithOrientation:(char)a0 extension:(id)a1 generateIntermediaries:(BOOL)a2;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)transcriptTraitCollection;
- (id)vCardURLProperties;

@end
