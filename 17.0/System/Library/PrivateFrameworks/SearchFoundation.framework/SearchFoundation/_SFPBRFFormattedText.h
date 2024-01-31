@class _SFPBRFColor, NSString, _SFPBRFTextEncapsulation, _SFPBRFImageElement, NSData, _SFPBRFOptionalBool;

@interface _SFPBRFFormattedText : PBCodable <_SFPBRFFormattedText, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) _SFPBRFImageElement *inline_image_element;
@property (retain, nonatomic) _SFPBRFColor *color;
@property (retain, nonatomic) _SFPBRFOptionalBool *is_italic;
@property (retain, nonatomic) _SFPBRFOptionalBool *is_bold;
@property (retain, nonatomic) _SFPBRFTextEncapsulation *text_encapsulation;
@property (retain, nonatomic) _SFPBRFOptionalBool *is_highlighted;
@property (retain, nonatomic) _SFPBRFColor *background_color;
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
