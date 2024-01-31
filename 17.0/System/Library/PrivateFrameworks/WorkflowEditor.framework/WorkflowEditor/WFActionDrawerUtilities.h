@interface WFActionDrawerUtilities : NSObject

+ (id)activitySectionsForDonations:(id)a0;
+ (id)appSectionsForActionSections:(id)a0;
+ (id)appSectionsForDonations:(id)a0;
+ (id)deduplicateAppSections:(id)a0;
+ (id)filterAppSections:(id)a0 searchQuery:(id)a1;
+ (id)localizedAppNames;
+ (id)suggestionSectionsForDonations:(id)a0 excludingConvertedLinkActions:(BOOL)a1;

@end
