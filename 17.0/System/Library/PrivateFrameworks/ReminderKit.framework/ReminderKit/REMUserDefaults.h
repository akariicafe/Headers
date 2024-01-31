@class NSUserDefaults, NSString, NSMutableDictionary, REMDaemonUserDefaults;

@interface REMUserDefaults : NSObject

@property (class, readonly, nonatomic) REMDaemonUserDefaults *daemonUserDefaults;

@property (readonly, nonatomic) NSString *suiteName;
@property (readonly, nonatomic) NSMutableDictionary *observers;
@property (nonatomic) BOOL showRemindersAsOverdue_cached;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;

+ (id)appGroupUserDefaults;

- (void)_removeObserver:(id)a0;
- (id)_addObserverForKey:(id)a0 block:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)_startStreamingValuesForKey:(id)a0 block:(id /* block */)a1;
- (id)_startObservingValuesForKey:(id)a0 block:(id /* block */)a1;
- (id)initWithSuiteName:(id)a0 containerURL:(id)a1;

@end
