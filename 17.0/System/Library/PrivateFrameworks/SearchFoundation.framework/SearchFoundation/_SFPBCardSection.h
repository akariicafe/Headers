@class NSData, _SFPBCard, NSArray, NSString, _SFPBColor, _SFPBUserReportRequest, _SFPBCardSectionValue, _SFPBCommand;

@interface _SFPBCardSection : PBCodable <_SFPBCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int type;
@property (retain, nonatomic) _SFPBCardSectionValue *value;
@property (retain, nonatomic) _SFPBCard *nextCard;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) _SFPBUserReportRequest *userReportRequest;
@property (retain, nonatomic) _SFPBCommand *command;
@property (retain, nonatomic) _SFPBCommand *previewCommand;
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (copy, nonatomic) NSString *cardSectionDetail;
@property (copy, nonatomic) NSString *previewButtonItemsTitle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (nonatomic) BOOL shouldHideInAmbientMode;
@property (copy, nonatomic) NSArray *leadingSwipeButtonItems;
@property (copy, nonatomic) NSArray *trailingSwipeButtonItems;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) int separatorStyle;
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
- (id)leadingSwipeButtonItemsAtIndex:(unsigned long long)a0;
- (void)addLeadingSwipeButtonItems:(id)a0;
- (void)addTrailingSwipeButtonItems:(id)a0;
- (void)clearLeadingSwipeButtonItems;
- (void)clearTrailingSwipeButtonItems;
- (unsigned long long)leadingSwipeButtonItemsCount;
- (id)trailingSwipeButtonItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)trailingSwipeButtonItemsCount;
- (void)addCommands:(id)a0;
- (void)addParameterKeyPaths:(id)a0;
- (void)addPreviewButtonItems:(id)a0;
- (void)addPunchoutOptions:(id)a0;
- (void)clearCommands;
- (void)clearParameterKeyPaths;
- (void)clearPreviewButtonItems;
- (void)clearPunchoutOptions;
- (id)commandsAtIndex:(unsigned long long)a0;
- (unsigned long long)commandsCount;
- (id)initWithSFCardSection:(id)a0;
- (id)parameterKeyPathsAtIndex:(unsigned long long)a0;
- (unsigned long long)parameterKeyPathsCount;
- (id)previewButtonItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)previewButtonItemsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)punchoutOptionsCount;

@end
