@class NSArray, NSString, NSData, _SFPBRFTextProperty;

@interface _SFPBRFSummaryItemTextCardSection : PBCodable <_SFPBRFSummaryItemTextCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFTextProperty *text_2;
@property (retain, nonatomic) _SFPBRFTextProperty *text_1;
@property (copy, nonatomic) NSArray *text_3s;
@property (retain, nonatomic) _SFPBRFTextProperty *text_4;
@property (retain, nonatomic) _SFPBRFTextProperty *text_5;
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
- (void)clearText_3;
- (void)setText_3:(id)a0;
- (id)text_3AtIndex:(unsigned long long)a0;
- (unsigned long long)text_3Count;

@end
