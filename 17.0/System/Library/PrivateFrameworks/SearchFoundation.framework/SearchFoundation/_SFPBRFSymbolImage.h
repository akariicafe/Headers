@class NSString, _SFPBRFColor, NSData;

@interface _SFPBRFSymbolImage : PBCodable <_SFPBRFSymbolImage, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) _SFPBRFColor *primary_color;
@property (retain, nonatomic) _SFPBRFColor *secondary_color;
@property (nonatomic) int image_style;
@property (nonatomic) int symbol_rendering_mode;
@property (retain, nonatomic) _SFPBRFColor *background_color;
@property (nonatomic) BOOL punches_through_background;
@property (readonly, nonatomic) NSData *jsonData;
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
