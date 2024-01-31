@class NSData, NSString, NSUUID, NSError, UIImage, NSURL, CKImageData, NSArray, NSDictionary;

@interface MSSticker : NSObject <MSStickerPrivate>

@property (retain, nonatomic) CKImageData *_imageData;
@property (retain, nonatomic) NSError *_stickerError;
@property (retain, nonatomic) UIImage *_thumbnail;
@property (nonatomic) unsigned long long stickerEffectType;
@property (readonly, nonatomic) NSURL *imageFileURL;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSUUID *stickerIdentifier;
@property (readonly, nonatomic) NSString *stickerName;
@property (retain, nonatomic) NSString *stickerPackGUID;
@property (readonly, nonatomic) NSArray *representations;
@property (readonly, nonatomic) NSString *externalURI;
@property (readonly, nonatomic) NSData *metadata;
@property (readonly, nonatomic) NSDictionary *attributionInfo;
@property (readonly, nonatomic) NSURL *animatedImageCacheURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)MSStickerPreviewCacheKeyForSticker:(id)a0;
+ (BOOL)_isHEICSupported;
+ (id)_stickerRepresentationsForImageFileURL:(id)a0;
+ (id)stickerWithContentsOfURL:(id)a0 localizedDescription:(id)a1 error:(id *)a2;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithContentsOfFileURL:(id)a0 localizedDescription:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 data:(id)a1 localizedDescription:(id)a2 error:(id *)a3;
- (void)_generateThumbnail;
- (void)_convertImageFileURLIfNeeded;
- (void)_generateImageData;
- (void)_generateImageDataFromRepresentation:(id)a0;
- (void)_generateImageDataFromURL:(id)a0;
- (id)initWithContentsOfURL:(id)a0 data:(id)a1 externalURI:(id)a2 localizedDescription:(id)a3 error:(id *)a4;
- (id)initWithContentsOfURL:(id)a0 externalURI:(id)a1 localizedDescription:(id)a2 error:(out id *)a3;
- (id)initWithContentsOfURL:(id)a0 localizedDescription:(id)a1 error:(id *)a2;
- (id)initWithFileURL:(id)a0 identifier:(id)a1 localizedDescription:(id)a2;
- (id)initWithStickerIdentifier:(id)a0 representations:(id)a1 externalURI:(id)a2 localizedDescription:(id)a3;
- (id)initWithStickerIdentifier:(id)a0 representations:(id)a1 stickerName:(id)a2 effectType:(long long)a3 externalURI:(id)a4 localizedDescription:(id)a5 metadata:(id)a6 attributionInfo:(id)a7;
- (id)initWithStickerIdentifier:(id)a0 representations:(id)a1 stickerName:(id)a2 externalURI:(id)a3 localizedDescription:(id)a4;

@end
