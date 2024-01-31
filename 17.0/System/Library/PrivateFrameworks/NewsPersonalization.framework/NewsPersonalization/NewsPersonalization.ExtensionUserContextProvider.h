@class FCPersonalizationWhitelist;

@interface NewsPersonalization.ExtensionUserContextProvider : _TtCs12_SwiftObject <FCFavoritesPersonalizer> {
    void /* unknown type, empty encoding */ todayPrivateData;
}

@property (nonatomic, readonly) FCPersonalizationWhitelist *whitelist;

- (unsigned long long)whitelistLevelForTagID:(id)a0;
- (void)prepareFavorites:(id /* block */)a0;

@end
