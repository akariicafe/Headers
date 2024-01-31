@interface USUIContactParentsHelper : NSObject

+ (void)obtainParentsForCurrentContact:(id /* block */)a0;
+ (void)obtainChatWithParentsURLForInterventionType:(long long)a0 completionHandler:(id /* block */)a1;
+ (void)openChatWithParentsForInterventionType:(long long)a0;
+ (void)openChatWithURL:(id)a0;
+ (id)urlFromAddressList:(id)a0;

@end
