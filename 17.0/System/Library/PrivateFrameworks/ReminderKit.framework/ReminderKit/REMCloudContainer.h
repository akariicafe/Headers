@interface REMCloudContainer : NSObject

+ (void)_writeLogCreatingCKContainerWithAccountIdentifier:(id)a0 personaIdentifier:(id)a1;
+ (BOOL)isSandboxEnvironment;
+ (id)_newCloudContainerForAccountIdentifier:(id)a0;
+ (id)newCloudContainerWithPublicCloudDatabase;
+ (id)newCloudContainerForAccount:(id)a0;
+ (id)newCloudContainerForAccountID:(id)a0;

@end
