@class _SFPBRFUrlImage, NSData, NSString, _SFPBRFAvatarImage, _SFPBRFMonogramImage, _SFPBRFAppIconImage, _SFPBRFDefaultBrowserAppIconImage, _SFPBRFBadgedImage, _SFPBRFSymbolImage;

@interface _SFPBRFImageSource : PBCodable <_SFPBRFImageSource, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFUrlImage *url;
@property (retain, nonatomic) _SFPBRFSymbolImage *symbol;
@property (retain, nonatomic) _SFPBRFAppIconImage *app_icon;
@property (retain, nonatomic) _SFPBRFAvatarImage *avatar;
@property (retain, nonatomic) _SFPBRFMonogramImage *monogram;
@property (retain, nonatomic) _SFPBRFBadgedImage *badged_image;
@property (retain, nonatomic) _SFPBRFDefaultBrowserAppIconImage *default_browser_app_icon;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;

@end
