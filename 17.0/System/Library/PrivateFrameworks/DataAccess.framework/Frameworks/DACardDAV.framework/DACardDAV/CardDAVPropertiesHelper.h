@interface CardDAVPropertiesHelper : NSObject

+ (long long)maxResourceSizeFromSyncDict:(id)a0;
+ (long long)maxImageSizeFromSyncDict:(id)a0;
+ (BOOL)updateSyncDict:(id)a0 withDAVContainer:(id)a1;

@end
