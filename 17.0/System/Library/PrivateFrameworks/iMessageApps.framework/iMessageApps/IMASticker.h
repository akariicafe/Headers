@class NSString, NSArray, NSURL, NSData, NSNumber, NSDictionary;

@interface IMASticker : NSObject

@property (class, readonly, nonatomic) double screenScale;

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSString *stickerName;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;
@property (readonly, copy, nonatomic) NSString *stickerIdentifier;
@property (copy, nonatomic) NSArray *representations;
@property (readonly, copy, nonatomic) NSString *externalURI;
@property (readonly, copy, nonatomic) NSNumber *stickerEffectType;
@property (readonly, copy, nonatomic) NSData *metadata;
@property (readonly, copy, nonatomic) NSDictionary *ckAttributionInfo;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 stickerName:(id)a1 accessibilityLabel:(id)a2 representations:(id)a3;
- (id)initWithStickerIdentifier:(id)a0 fileURL:(id)a1 representations:(id)a2 effectType:(id)a3 externalURI:(id)a4 stickerName:(id)a5 accessibilityLabel:(id)a6 metadata:(id)a7 ckAttributionInfo:(id)a8;

@end
