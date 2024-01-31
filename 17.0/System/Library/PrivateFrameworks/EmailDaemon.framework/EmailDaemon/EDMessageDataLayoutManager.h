@interface EDMessageDataLayoutManager : NSObject

+ (id)messageDataDirectoryURLForGlobalMessageID:(long long)a0 basePath:(id)a1 purgeable:(BOOL)a2;
+ (id)messageDataDirectoryURLForGlobalMessageID:(long long)a0 rootMessageDataDirectory:(id)a1;
+ (id)rootMessageDataDirectoryForBasePath:(id)a0 purgeable:(BOOL)a1;

@end
