@class NSString, NSDictionary, NSData, NSURL, NSArray;

@interface IMSticker : NSObject

@property (readonly, nonatomic) BOOL isEmojiSticker;
@property (retain, nonatomic) NSData *recipe;
@property (copy, nonatomic) NSString *ballonBundleID;
@property (copy, nonatomic) NSString *stickerPackGUID;
@property (copy, nonatomic) NSDictionary *attributionInfo;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *moodCategory;
@property (readonly, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSURL *animatedImageCacheURLFromExtension;
@property (nonatomic) long long stickerEffectType;
@property (copy, nonatomic) NSData *metadata;
@property (copy, nonatomic) NSString *stickerName;
@property (copy, nonatomic) NSArray *representations;
@property (copy, nonatomic) NSString *externalURI;
@property (nonatomic) unsigned long long initialFrameIndex;
@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSString *stickerGUID;
@property (readonly, copy, nonatomic) NSString *textToSpeechName;

+ (id)userInfoDictionaryWithGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })a0;
+ (id)userInfoDictionaryWithLayoutIntent:(unsigned long long)a0 parentPreviewWidth:(double)a1 xScalar:(double)a2 yScalar:(double)a3 scale:(double)a4 rotation:(double)a5 initialFrameIndex:(unsigned long long)a6;
+ (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })geometryDescriptorFromUserInfoDictionary:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStickerID:(id)a0 stickerPackID:(id)a1 fileURL:(id)a2 accessibilityLabel:(id)a3 moodCategory:(id)a4 stickerName:(id)a5;
- (id)initWithStickerIdentifier:(id)a0 stickerPackID:(id)a1 representations:(id)a2 effectType:(long long)a3 initialFrameIndex:(unsigned long long)a4 externalURI:(id)a5 stickerName:(id)a6 accessibilityLabel:(id)a7 metadata:(id)a8;
- (id)initWithStickerID:(id)a0 stickerPackID:(id)a1 fileURL:(id)a2 accessibilityLabel:(id)a3 moodCategory:(id)a4 stickerName:(id)a5 textToSpeechName:(id)a6;
- (id)initWithStickerPropertyDictionary:(id)a0 stickerPackID:(id)a1 stickerPackBundlePath:(id)a2;

@end
