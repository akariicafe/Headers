@interface HealthExperience.UserDefaultsObserver : NSObject {
    void /* unknown type, empty encoding */ currentValue;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ key;
}

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
