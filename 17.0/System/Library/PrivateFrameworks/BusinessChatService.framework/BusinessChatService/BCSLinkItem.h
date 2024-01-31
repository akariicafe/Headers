@class NSNumber, NSString, NSDictionary, NSURL, BCSLinkItemModel, BCSBusinessLinkContentItem;
@protocol BCSLocaleHelperProtocol;

@interface BCSLinkItem : BCSItem <BSDescriptionProviding, BCSLinkItemDescribing, BCSBusinessLinkContentItemDescribing, NSCopying> {
    NSString *_cachedContentItemLanguage;
    BCSBusinessLinkContentItem *_cachedContentItem;
}

@property (readonly, retain, nonatomic) NSURL *heroImageURL;
@property (readonly, retain, nonatomic) NSURL *iconImageURL;
@property (readonly, nonatomic) id<BCSLocaleHelperProtocol> localeHelper;
@property (readonly, nonatomic) BCSLinkItemModel *model;
@property (copy, nonatomic) NSDictionary *debugInfo;
@property (readonly, retain, nonatomic) NSURL *linkURL;
@property (readonly, copy, nonatomic) NSString *fullHash;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, retain, nonatomic) NSURL *redirectURL;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) BOOL isPoweredBy;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BCSBusinessLinkContentItem *businessLinkContentItem;
@property (readonly, retain, nonatomic) NSDictionary *mapIconStyleAttributes;
@property (readonly, retain, nonatomic) NSNumber *mapItemMUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain, nonatomic) NSString *heroImageURLString;
@property (readonly, retain, nonatomic) NSString *iconImageURLString;

+ (id)linkItemsFromLinkItemModels:(id)a0;

- (id)itemIdentifier;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)heroImageURLForSpecifier:(struct { unsigned long long x0; unsigned long long x1; char *x2; char *x3; })a0;
- (id)iconImageURLForSpecifier:(struct { unsigned long long x0; unsigned long long x1; char *x2; char *x3; })a0;
- (id)initWithLinkItemModel:(id)a0 expirationDate:(id)a1 localeHelper:(id)a2;
- (id)initWithLinkItemModel:(id)a0 localeHelper:(id)a1;
- (BOOL)matchesItemIdentifying:(id)a0;
- (long long)truncatedHash;

@end
