@interface WiFiUsageUserSession : WiFiUsageSession {
    BOOL _userInactive;
    BOOL _deviceLocked;
}

- (id)metricName;
- (id)initWithInterfaceName:(id)a0;
- (void)displayStateDidChange:(BOOL)a0;
- (void)linkQualityDidChange:(id)a0;
- (void)lockStateDidChange:(BOOL)a0;

@end
