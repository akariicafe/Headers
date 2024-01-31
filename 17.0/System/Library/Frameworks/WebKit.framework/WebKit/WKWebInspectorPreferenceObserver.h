@interface WKWebInspectorPreferenceObserver : NSObject {
    struct RetainPtr<NSUserDefaults> { void *m_ptr; } m_userDefaults;
}

+ (id)sharedInstance;

- (id)init;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
