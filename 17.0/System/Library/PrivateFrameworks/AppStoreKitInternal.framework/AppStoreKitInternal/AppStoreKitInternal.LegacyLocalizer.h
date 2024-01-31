@class NSString;

@interface AppStoreKitInternal.LegacyLocalizer : NSObject <AppStoreKitInternal.LocalizerProtocol> {
    void /* unknown type, empty encoding */ locale;
    void /* unknown type, empty encoding */ extendedLocale;
    void /* unknown type, empty encoding */ localizedStringTables;
    void /* unknown type, empty encoding */ dateFormatters;
    void /* unknown type, empty encoding */ dynamicDateFormatters;
    void /* unknown type, empty encoding */ $__lazy_storage_$_relativeDateFormatter;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *arcadeWordmarkAssetName;

- (id)init;
- (void).cxx_destruct;
- (id)string:(id)a0;
- (id)formattedCount:(id)a0;
- (id)fileSize:(id)a0;
- (id)relativeDate:(id)a0;
- (id)decimal:(id)a0;
- (id)decimal:(id)a0 :(long long)a1;
- (id)formatDate:(id)a0 :(id)a1;
- (id)formatDateInSentence:(id)a0 :(id)a1 :(id)a2;
- (id)formatDateWithContext:(id)a0 :(id)a1 :(id)a2;
- (id)formatDuration:(long long)a0 :(id)a1;
- (id)formattedCountForPreferredLocale:(id)a0 :(id)a1;
- (id)stringForPreferredLocale:(id)a0 :(id)a1;
- (id)stringWithCount:(id)a0 :(long long)a1;
- (id)stringWithCounts:(id)a0 :(id)a1;
- (id)timeAgo:(id)a0;
- (id)timeAgoWithContext:(id)a0 :(id)a1;

@end
