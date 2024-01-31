@class RFBadgedImage, RFUrlImage, NSData, RFSymbolImage, NSString, RFDefaultBrowserAppIconImage, NSDictionary, RFMonogramImage, RFAppIconImage, RFAvatarImage;

@interface RFImageSource : NSObject <RFImageSource, NSSecureCoding, NSCopying> {
    struct { unsigned char url : 1; unsigned char symbol : 1; unsigned char app_icon : 1; unsigned char avatar : 1; unsigned char monogram : 1; unsigned char badged_image : 1; unsigned char default_browser_app_icon : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RFUrlImage *url;
@property (retain, nonatomic) RFSymbolImage *symbol;
@property (retain, nonatomic) RFAppIconImage *app_icon;
@property (retain, nonatomic) RFAvatarImage *avatar;
@property (retain, nonatomic) RFMonogramImage *monogram;
@property (retain, nonatomic) RFBadgedImage *badged_image;
@property (retain, nonatomic) RFDefaultBrowserAppIconImage *default_browser_app_icon;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)hasUrl;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasBadged_image;
- (BOOL)hasApp_icon;
- (BOOL)hasAvatar;
- (BOOL)hasDefault_browser_app_icon;
- (BOOL)hasMonogram;
- (BOOL)hasSymbol;

@end
