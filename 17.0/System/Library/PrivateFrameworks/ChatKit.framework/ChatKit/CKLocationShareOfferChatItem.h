@class FMFLocation, IMHandle, NSString;

@interface CKLocationShareOfferChatItem : CKBalloonChatItem

@property (retain, nonatomic) FMFLocation *lastKnownLocation;
@property (readonly, nonatomic) long long offerState;
@property (readonly, weak, nonatomic) IMHandle *sender;
@property (readonly, weak, nonatomic) NSString *titleText;
@property (readonly, weak, nonatomic) NSString *locationText;

+ (id)placeholderPreviewCache;
+ (id)titleBarMaskImageForWidth:(double)a0;

- (id)time;
- (void)dealloc;
- (id)previewURL;
- (void).cxx_destruct;
- (BOOL)failed;
- (BOOL)isFromMe;
- (id)_desaturatedImageForImage:(id)a0;
- (void)_generateMapPreview;
- (id)_generatePlaceholderThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0;
- (id)_generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 withCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2 forState:(long long)a3;
- (void)_handleLocationDidChangeNotification:(id)a0;
- (id)_placeholderCacheKey;
- (id)_previewCacheKey:(unsigned long long)a0;
- (Class)balloonViewClass;
- (void)configureBalloonView:(id)a0;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (id)modificationDateForPreview:(id)a0;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (id)previewURLForWidth:(unsigned long long)a0;
- (void)savePreview:(id)a0 toURL:(id)a1;
- (id)savedPreviewFromURL:(id)a0;
- (BOOL)shouldUpdatePreviewWithLocation:(id)a0 lastKnownLocation:(id)a1 previewURL:(id)a2;
- (id)transcriptTraitCollection;

@end
