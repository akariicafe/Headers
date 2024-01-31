@interface LiveFSDiskUnlock : NSObject

+ (void)unlockDomain:(id)a0 withPassword:(id)a1 saveToKeychain:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
