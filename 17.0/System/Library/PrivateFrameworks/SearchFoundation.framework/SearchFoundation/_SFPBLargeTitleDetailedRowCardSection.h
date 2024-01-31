@class NSArray, NSString, _SFPBRichText, _SFPBButtonItem, _SFPBColor, NSData;

@interface _SFPBLargeTitleDetailedRowCardSection : PBCodable <_SFPBLargeTitleDetailedRowCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (retain, nonatomic) _SFPBRichText *title;
@property (retain, nonatomic) _SFPBButtonItem *subtitleButtonItem;
@property (copy, nonatomic) NSArray *trailingButtonItems;
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
- (void)addPunchoutOptions:(id)a0;
- (void)addTrailingButtonItems:(id)a0;
- (void)clearPunchoutOptions;
- (void)clearTrailingButtonItems;
- (id)punchoutOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)punchoutOptionsCount;
- (id)trailingButtonItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)trailingButtonItemsCount;

@end
