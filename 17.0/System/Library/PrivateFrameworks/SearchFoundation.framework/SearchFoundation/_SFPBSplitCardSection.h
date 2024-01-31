@class NSString, NSArray, _SFPBRichText, NSData;

@interface _SFPBSplitCardSection : PBCodable <_SFPBSplitCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRichText *topTitle;
@property (retain, nonatomic) _SFPBRichText *secondaryTopTitle;
@property (copy, nonatomic) NSString *listPrefix;
@property (copy, nonatomic) NSArray *listItems;
@property (copy, nonatomic) NSString *listMoreString;
@property (retain, nonatomic) _SFPBRichText *bottomTitle;
@property (retain, nonatomic) _SFPBRichText *body;
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
- (void)addListItems:(id)a0;
- (void)clearListItems;
- (id)listItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)listItemsCount;

@end
