@class NSData, NSString, NSArray, SFImage, SFCard, SFColor, NSDictionary, SFUserReportRequest, SFCommand, SFRichText, NSNumber;

@interface SFRowCardSection : SFCardSection <SFRowCardSection, NSSecureCoding, NSCopying> {
    struct { unsigned char imageIsRightAligned : 1; unsigned char keyNoWrap : 1; unsigned char valueNoWrap : 1; unsigned char cardPaddingBottom : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) SFImage *image;
@property (nonatomic) BOOL imageIsRightAligned;
@property (retain, nonatomic) SFRichText *leadingText;
@property (retain, nonatomic) SFRichText *trailingText;
@property (retain, nonatomic) SFImage *attributionImage;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL keyNoWrap;
@property (copy, nonatomic) NSNumber *keyWeight;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL valueNoWrap;
@property (copy, nonatomic) NSNumber *valueWeight;
@property (nonatomic) BOOL cardPaddingBottom;
@property (retain, nonatomic) SFRichText *leadingSubtitle;
@property (retain, nonatomic) SFRichText *trailingSubtitle;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) BOOL hideDivider;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (nonatomic) BOOL shouldHideInAmbientMode;
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) SFCommand *previewCommand;
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (retain, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) NSString *cardSectionDetail;
@property (retain, nonatomic) NSString *previewButtonItemsTitle;
@property (copy, nonatomic) NSArray *leadingSwipeButtonItems;
@property (copy, nonatomic) NSArray *trailingSwipeButtonItems;
@property (readonly) NSArray *embeddedCards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasCardPaddingBottom;
- (BOOL)hasImageIsRightAligned;
- (BOOL)hasKeyNoWrap;
- (BOOL)hasValueNoWrap;

@end
