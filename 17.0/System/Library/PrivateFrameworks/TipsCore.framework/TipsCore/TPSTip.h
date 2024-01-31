@class TPSAssets, NSString, NSArray, TPSChecklistContent, TPSFullTipContent, TPSActionableContent;

@interface TPSTip : TPSDocument <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) long long subContentType;
@property (copy, nonatomic) NSString *eyebrow;
@property (copy, nonatomic) NSString *linkedDocumentId;
@property (copy, nonatomic) TPSFullTipContent *fullContent;
@property (copy, nonatomic) TPSActionableContent *miniContent;
@property (copy, nonatomic) TPSChecklistContent *checklistContent;
@property (copy, nonatomic) NSArray *collectionIdentifiers;
@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (readonly, nonatomic, getter=isChecklistTip) BOOL checklistTip;
@property (readonly, nonatomic, getter=isTip) BOOL tip;
@property (readonly, nonatomic, getter=isIntro) BOOL intro;
@property (readonly, nonatomic, getter=isOutro) BOOL outro;
@property (nonatomic, getter=isSiriSuggestion) BOOL siriSuggestion;
@property (nonatomic) long long contentStatus;
@property (readonly, copy, nonatomic) TPSAssets *fullContentAssets;

+ (id)correlationIdForDictionary:(id)a0;
+ (long long)contentTypeForContentDictionary:(id)a0;
+ (long long)contentTypeForDictionary:(id)a0;
+ (id)na_identity;
+ (id)tipIdFromDictionary:(id)a0;

- (BOOL)hasImage;
- (unsigned long long)hash;
- (id)footnoteContent;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1 clientConditionIdentifier:(id)a2 fileIdMap:(id)a3 clientConditions:(id)a4;
- (id)shortTitle;
- (id)summary;
- (BOOL)containsLinks;
- (void)encodeWithCoder:(id)a0;
- (id)URLWithReferrer:(id)a0;
- (id)actions;
- (BOOL)isSoftwareWelcome;
- (void)addCollectionIdentifier:(id)a0;
- (id)bodyText;
- (id)fullContentAssets;
- (id)webURLPath;
- (BOOL)textContainsHTML;
- (void).cxx_destruct;
- (BOOL)hasVideo;
- (BOOL)isHardwareWelcome;
- (id)debugDescription;
- (id)title;
- (id)shareText;
- (BOOL)isEqual:(id)a0;
- (id)eyebrowText;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeCollectionIdentifier:(id)a0;
- (id)bodyContent;

@end
