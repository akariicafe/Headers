@interface CNEmailAddressUtilities : NSObject

+ (id)aliasedDomains;
+ (id)expandAliasedDomainsInAddress:(id)a0;
+ (BOOL)isStringEmailAddress:(id)a0;
+ (id)makeEmailRegex;
+ (id)safeUserVisibleEmailAddress:(id)a0;

@end
