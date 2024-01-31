@class NSString, NSDictionary, RFAspectRatio, RFSymbolImage, NSData;

@interface RFUrlImage : NSObject <RFUrlImage, NSSecureCoding, NSCopying> {
    struct { unsigned char symbol_placeholder_image : 1; unsigned char image_style : 1; unsigned char sizing_mode : 1; unsigned char image_rendering_mode : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *dark_mode_url;
@property (retain, nonatomic) RFSymbolImage *symbol_placeholder_image;
@property (nonatomic) int image_style;
@property (retain, nonatomic) RFAspectRatio *aspect_ratio;
@property (nonatomic) int sizing_mode;
@property (nonatomic) int image_rendering_mode;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasImage_rendering_mode;
- (BOOL)hasImage_style;
- (BOOL)hasSizing_mode;
- (BOOL)hasSymbol_placeholder_image;

@end
