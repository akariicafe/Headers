@class NSArray, NSString;

@interface _LSStartupJournalledInstallNotification : NSObject <_LSStartupJournalledNotification>

@property (readonly, nonatomic) int notification;
@property (readonly, nonatomic) NSArray *proxies;
@property (readonly, nonatomic) BOOL plugins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dispatchToObserver:(id)a0 forInstallProgressService:(id)a1;
- (id)initWithNotification:(int)a0 appProxies:(id)a1 plugins:(BOOL)a2;

@end
