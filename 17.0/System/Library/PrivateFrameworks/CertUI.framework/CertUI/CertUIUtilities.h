@interface CertUIUtilities : NSObject

+ (id)_certUIBundle;
+ (id)bundleIDFromAuditToken:(struct { unsigned int x0[8]; } *)a0;
+ (id)localizedAppTitleForBundleID:(id)a0;

@end
