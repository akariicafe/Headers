@class ATXNotificationSettingsReader;

@interface ATXNotificationSettingsLogger : NSObject {
    ATXNotificationSettingsReader *_reader;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithNotificationSettingsReader:(id)a0;
- (void)logNotificationSettingsMetrics;
- (void)logNotificationSettingsMetricsWithXPCActivity:(id)a0;

@end
