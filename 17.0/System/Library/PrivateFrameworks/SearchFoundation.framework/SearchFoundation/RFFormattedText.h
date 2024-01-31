@class NSData, NSString, RFOptionalBool, RFImageElement, RFTextEncapsulation, NSDictionary, RFColor;

@interface RFFormattedText : NSObject <RFFormattedText, NSSecureCoding, NSCopying> {
    struct { unsigned char text : 1; unsigned char inline_image_element : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) RFImageElement *inline_image_element;
@property (retain, nonatomic) RFColor *color;
@property (retain, nonatomic) RFOptionalBool *is_italic;
@property (retain, nonatomic) RFOptionalBool *is_bold;
@property (retain, nonatomic) RFTextEncapsulation *text_encapsulation;
@property (retain, nonatomic) RFOptionalBool *is_highlighted;
@property (retain, nonatomic) RFColor *background_color;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasText;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasInline_image_element;

@end
