@interface CRDaemonController : NSObject

+ (id)getAllowedListFromEntitlements:(id)a0;
+ (void)controlWithParameters:(id)a0 withReply:(id /* block */)a1;
+ (BOOL)doLaunchControl:(id)a0 action:(id)a1;
+ (id)safeGetStringParam:(id)a0 key:(id)a1;

@end
