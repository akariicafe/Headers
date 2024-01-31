@class NSArray, NSData, NSString;

@interface _SFPBRFTextElement : PBCodable <_SFPBRFTextElement, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *formatted_texts;
@property (nonatomic) int line_limit;
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
- (void)addFormatted_text:(id)a0;
- (void)clearFormatted_text;
- (id)formatted_textAtIndex:(unsigned long long)a0;
- (unsigned long long)formatted_textCount;
- (void)setFormatted_text:(id)a0;

@end
