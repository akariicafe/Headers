@class NSString, NSDictionary, ATXComplication, NSArray, NSNumber, BSColor;

@interface ATXFaceGalleryItem : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *score;
@property (nonatomic) BOOL isPreferredForGallery;
@property (readonly, copy, nonatomic) NSDictionary *jsonDictionary;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *descriptorIdentifier;
@property (copy, nonatomic) NSString *extensionBundleIdentifier;
@property (copy, nonatomic) NSString *displayNameLocalizationKey;
@property (copy, nonatomic) NSString *spokenNameLocalizationKey;
@property (copy, nonatomic) NSString *descriptiveTextLocalizationKey;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (copy, nonatomic) NSString *localizedSubtitle;
@property (copy, nonatomic) NSString *titleFontName;
@property (copy, nonatomic) BSColor *titleColor;
@property (copy, nonatomic) ATXComplication *subtitleComplication;
@property (nonatomic) long long layoutType;
@property (retain, nonatomic) NSNumber *modeSemanticType;
@property (copy, nonatomic) NSString *modeUUID;
@property (copy, nonatomic) NSArray *complications;
@property (copy, nonatomic) NSArray *landscapeComplications;
@property (nonatomic, getter=isBlankTemplate) BOOL blankTemplate;
@property (nonatomic) BOOL shouldShowAsShuffleStack;
@property (nonatomic) long long source;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemFromJSONDictionary:(id)a0;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 descriptorIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 localizedDisplayName:(id)a3 modeSemanticType:(id)a4 titleFontName:(id)a5 titleColor:(id)a6 subtitleComplication:(id)a7 layoutType:(long long)a8 complications:(id)a9 landscapeComplications:(id)a10;
- (BOOL)isEqualToATXFaceGalleryItem:(id)a0;
- (id)json;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 descriptorIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 localizedDisplayName:(id)a3 modeSemanticType:(id)a4 titleFontName:(id)a5 titleColor:(id)a6 subtitleComplication:(id)a7 layoutType:(long long)a8 complications:(id)a9;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
