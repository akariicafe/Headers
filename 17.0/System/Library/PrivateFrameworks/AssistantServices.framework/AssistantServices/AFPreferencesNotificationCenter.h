@class NSLock, NSMutableDictionary;

@interface AFPreferencesNotificationCenter : NSNotificationCenter {
    NSLock *instanceLock;
    NSMutableDictionary *darwinRegistrationsByObserver;
    NSMutableDictionary *darwinRegistrationsByName;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)addObserverForDarwinName:(struct __CFString { } *)a0 usingBlock:(id /* block */)a1;

@end
