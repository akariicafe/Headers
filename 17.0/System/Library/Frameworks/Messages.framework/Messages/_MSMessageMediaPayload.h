@class NSUUID, NSArray, NSString, UIImage, NSURL, NSData, NSDictionary;

@interface _MSMessageMediaPayload : NSObject <NSSecureCoding, NSItemProviderWriting, NSItemProviderReading>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSURL *mediaURL;
@property (copy, nonatomic) NSData *mediaData;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *mediaFilename;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSDictionary *attributionInfo;
@property (nonatomic) BOOL isSticker;
@property (copy, nonatomic) NSString *stickerPackGUID;
@property (nonatomic) unsigned long long stickerEffectType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceFrame;
@property (nonatomic) unsigned long long initialFrameIndex;
@property (retain, nonatomic) NSArray *stickerRepresentations;
@property (copy, nonatomic) NSString *externalURI;
@property (copy, nonatomic) NSUUID *stickerStoreIdentifier;
@property (copy, nonatomic) NSString *stickerName;
@property (copy, nonatomic) NSData *stickerMetadata;
@property (copy, nonatomic) NSURL *animatedImageCacheURL;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)convertToStickerWithExtensionIdentifier:(id)a0;
- (id)initWithSticker:(id)a0;
- (BOOL)uriIsMemoji;
- (BOOL)uriIsUltraExtension;

@end
