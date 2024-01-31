@protocol UVCPreferencesTestability;

@interface UVCPreferences : NSObject {
    void /* unknown type, empty encoding */ _impl;
    void /* unknown type, empty encoding */ _testabilityProxy;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ sink;
    void /* unknown type, empty encoding */ _automation;
    void /* unknown type, empty encoding */ _enabled;
    void /* unknown type, empty encoding */ _magicEdgesEnabled;
    void /* unknown type, empty encoding */ _supported;
}

@property (class, nonatomic, readonly) UVCPreferences *sharedPreferences;

@property (nonatomic, retain) id<UVCPreferencesTestability> testabilityProxy;
@property (nonatomic) BOOL automation;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL magicEdgesEnabled;
@property (nonatomic, readonly) BOOL isSupported;
@property (nonatomic, readonly) BOOL isBeta;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)testabilityProxyDidChange;
- (id)init;
- (void).cxx_destruct;

@end
