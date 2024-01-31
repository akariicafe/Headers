@class NSArray, NSString, NSData, _SFPBRFTextProperty, _SFPBRFVisualProperty;

@interface _SFPBRFSimpleItemRichCardSection : PBCodable <_SFPBRFSimpleItemRichCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFTextProperty *text_1;
@property (retain, nonatomic) _SFPBRFTextProperty *text_2;
@property (copy, nonatomic) NSArray *text_3s;
@property (retain, nonatomic) _SFPBRFTextProperty *text_4;
@property (copy, nonatomic) NSArray *text_5s;
@property (retain, nonatomic) _SFPBRFTextProperty *text_6;
@property (retain, nonatomic) _SFPBRFTextProperty *text_7;
@property (retain, nonatomic) _SFPBRFTextProperty *text_8;
@property (retain, nonatomic) _SFPBRFVisualProperty *thumbnail;
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
- (void)addText_3:(id)a0;
- (void)addText_5:(id)a0;
- (void)clearText_3;
- (void)clearText_5;
- (void)setText_3:(id)a0;
- (void)setText_5:(id)a0;
- (id)text_3AtIndex:(unsigned long long)a0;
- (unsigned long long)text_3Count;
- (id)text_5AtIndex:(unsigned long long)a0;
- (unsigned long long)text_5Count;

@end
