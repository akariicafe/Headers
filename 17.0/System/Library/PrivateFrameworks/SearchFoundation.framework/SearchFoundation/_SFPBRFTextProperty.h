@class NSArray, NSData, NSString;

@interface _SFPBRFTextProperty : PBCodable <_SFPBRFTextProperty, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *text_elements;
@property (nonatomic) BOOL is_safe_for_logging;
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
- (void)addText_elements:(id)a0;
- (void)clearText_elements;
- (id)text_elementsAtIndex:(unsigned long long)a0;
- (unsigned long long)text_elementsCount;

@end
