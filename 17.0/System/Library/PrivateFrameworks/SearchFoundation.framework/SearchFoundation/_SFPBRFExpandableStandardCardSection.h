@class NSArray, _SFPBRFSummaryItemStandardCardSection, NSData, NSString;

@interface _SFPBRFExpandableStandardCardSection : PBCodable <_SFPBRFExpandableStandardCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFSummaryItemStandardCardSection *summary_item_standard_card_section;
@property (copy, nonatomic) NSArray *expanding_component_contents;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPrimary_Component;
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
- (void)addExpanding_component_content:(id)a0;
- (void)setExpanding_component_content:(id)a0;
- (void)clearExpanding_component_content;
- (id)expanding_component_contentAtIndex:(unsigned long long)a0;
- (unsigned long long)expanding_component_contentCount;

@end
