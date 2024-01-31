@interface SOConfigurationVersion : NSObject {
    long long _mode;
    int _token;
    unsigned long long _version;
}

@property (readonly, nonatomic) long long version;

+ (void)reset;

- (void)dealloc;
- (unsigned long long)_state;
- (long long)checkVersion;
- (void)increaseVersionWithMessage:(id)a0;
- (id)initWithMode:(long long)a0;
- (void)setAppSSOUnavailable;
- (void)_setStateAndNotify:(unsigned long long)a0;

@end
