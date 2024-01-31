@interface SSUXPCUtils : NSObject

+ (void)dispatchAsyncWithTransaction:(id)a0 block:(id /* block */)a1;
+ (id)extractSingleBundleId:(id)a0;
+ (id)extractUserInfo:(id)a0;
+ (BOOL)isCoreDataObjectArrayShortcutsChange:(id)a0;
+ (BOOL)isCoreDataObjectShortcutsChange:(id)a0;
+ (BOOL)isPlaceholder:(id)a0;
+ (BOOL)isShortcutsChange:(id)a0;

@end
