@interface CDMPlatformUtils : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)isAppleTV;
+ (BOOL)isHomePod;
+ (id)normalizeLocaleIdentifier:(id)a0;
+ (id)normalizedAssistantLocaleIdentifier;
+ (id)prettyPrintError:(id)a0;
+ (id)prettyPrintJson:(id)a0;

@end
