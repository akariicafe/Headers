@class WBSAction, NSString, NSArray, WBSStartPageBanner, UIMenu;

@interface WBSStartPageSection : NSObject {
    id /* block */ _configurationProvider;
}

@property (readonly, nonatomic) unsigned long long effectiveItemIdentifiersCount;
@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) WBSStartPageBanner *contentBanner;
@property (readonly, copy, nonatomic) id /* block */ siteIconConfigurationProvider;
@property (readonly, copy, nonatomic) id /* block */ siteCardConfigurationProvider;
@property (readonly, copy, nonatomic) id /* block */ richLinkConfigurationProvider;
@property (readonly, copy, nonatomic) id /* block */ siteRowConfigurationProvider;
@property (readonly, nonatomic) id identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) WBSAction *supplementaryAction;
@property (readonly, nonatomic) WBSStartPageBanner *banner;
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property (nonatomic) long long numberOfRowsVisibleWhenCollapsed;
@property (nonatomic) long long numberOfRowsVisibleWhenCollapsedInCompactWidth;
@property (nonatomic) BOOL usesLargeTitle;
@property (nonatomic) BOOL showsTopSeparator;
@property (nonatomic) BOOL expandsModally;
@property (copy, nonatomic) NSString *symbolImageName;
@property (copy, nonatomic) UIMenu *titleMenu;
@property (copy, nonatomic) id /* block */ contextMenuProvider;
@property (copy, nonatomic) id /* block */ contextMenuCommitHandler;
@property (copy, nonatomic) id /* block */ contextMenuDismissHandler;
@property (copy, nonatomic) id /* block */ dragItemProvider;
@property (copy, nonatomic) id /* block */ dropOperationProvider;
@property (copy, nonatomic) id /* block */ dropHandler;

+ (id)bannerSectionWithIdentifier:(id)a0 title:(id)a1 banner:(id)a2;
+ (id)footerSectionWithIdentifier:(id)a0 action:(id)a1;
+ (id)richLinkSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;
+ (id)cardSectionWithIdentifier:(id)a0 actions:(id)a1 banner:(id)a2 identifiers:(id)a3 configurationProvider:(id /* block */)a4;
+ (id)listSectionWithIdentifier:(id)a0 actions:(id)a1 banner:(id)a2 identifiers:(id)a3 configurationProvider:(id /* block */)a4;
+ (id)richLinkSectionWithIdentifier:(id)a0 actions:(id)a1 banner:(id)a2 identifiers:(id)a3 configurationProvider:(id /* block */)a4;
+ (id)iconSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 supplementaryAction:(id)a4 identifiers:(id)a5 configurationProvider:(id /* block */)a6;
+ (id)cardSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;
+ (id)headingSectionWithIdentifier:(id)a0 title:(id)a1;
+ (id)bannerSectionWithIdentifier:(id)a0 banner:(id)a1;
+ (id)actionSectionWithIdentifier:(id)a0 actions:(id)a1;
+ (id)listSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;
+ (id)iconSectionWithIdentifier:(id)a0 actions:(id)a1 banner:(id)a2 supplementaryAction:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;
+ (id)separatorSectionWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 itemType:(long long)a4 itemIdentifiers:(id)a5 configurationProvider:(id /* block */)a6;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)effectiveItemIdentifiersWithMaximumCount:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;

@end
