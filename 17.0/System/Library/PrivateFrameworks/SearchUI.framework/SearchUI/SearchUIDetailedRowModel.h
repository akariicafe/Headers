@class NSString, NSArray, SFActionItem, SFImage, SFFormattedText, SFRichText, SFButton, MKSearchFoundationResult;

@interface SearchUIDetailedRowModel : SearchUICardSectionRowModel

@property (retain, nonatomic) SFImage *leadingImage;
@property (retain) SFImage *fallbackImage;
@property (retain) SFButton *leadingButton;
@property BOOL preventThumbnailImageScaling;
@property BOOL isLocalApplicationResult;
@property (retain) NSString *nearbyBusinessesString;
@property (retain) SFRichText *topText;
@property (retain) SFRichText *title;
@property BOOL truncateTitleMiddle;
@property (retain) SFFormattedText *secondaryTitle;
@property BOOL secondaryTitleIsDetached;
@property (retain) SFImage *secondaryTitleImage;
@property (retain, nonatomic) NSArray *details;
@property (retain) SFRichText *footnote;
@property (retain) NSString *footnoteButtonText;
@property (retain) NSString *pinText;
@property (retain) SFActionItem *action;
@property (retain) SFRichText *trailingTopText;
@property (retain) SFRichText *trailingMiddleText;
@property (retain) SFRichText *trailingBottomText;
@property (retain) NSArray *buttonItems;
@property BOOL buttonItemsAreTrailing;
@property (retain) SFImage *trailingThumbnail;
@property (retain) MKSearchFoundationResult *mapsResult;
@property BOOL useCompactDisplay;

+ (BOOL)urlIsDraggable:(id)a0;
+ (id)richTextWithFormattedText:(id)a0;

- (int)separatorStyle;
- (BOOL)isDraggable;
- (id)descriptionText;
- (id)backgroundColor;
- (BOOL)isTappable;
- (id)dragAppBundleID;
- (void).cxx_destruct;
- (id)contactIdentifiers;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isContact;
- (id)dragURL;
- (BOOL)hasLeadingImage;
- (Class)cardSectionViewClass;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (void)fillOutPropertiesForCardSection:(id)a0;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3 itemIdentifier:(id)a4;
- (id)initWithResult:(id)a0 suggestion:(id)a1 queryId:(unsigned long long)a2 itemIdentifier:(id)a3;
- (id)populatedMapsCardSectionIfApplicable;
- (id)punchouts;
- (id)requestAppClipObjects;
- (id)richTextFromText:(id)a0;

@end
