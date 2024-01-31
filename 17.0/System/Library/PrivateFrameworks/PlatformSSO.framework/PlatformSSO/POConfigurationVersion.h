@interface POConfigurationVersion : NSObject {
    int _token;
    unsigned long long _version;
    long long _type;
}

@property (readonly, nonatomic) long long version;

+ (id)notificationForType:(long long)a0;

- (void)reset;
- (void)dealloc;
- (unsigned long long)_state;
- (long long)checkVersion;
- (void)increaseVersionWithMessage:(id)a0;
- (id)initWithConfigurationType:(long long)a0;
- (void)_setStateAndNotify:(unsigned long long)a0 type:(long long)a1;
- (void)setPlatformSSOUnavailable;

@end
