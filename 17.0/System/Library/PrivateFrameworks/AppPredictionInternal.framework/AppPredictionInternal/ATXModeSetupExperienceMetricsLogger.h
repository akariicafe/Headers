@class ATXModeConfigurationUIFlowLoggingBiomeStream, NSURL;

@interface ATXModeSetupExperienceMetricsLogger : NSObject

@property (retain, nonatomic) ATXModeConfigurationUIFlowLoggingBiomeStream *stream;
@property (retain, nonatomic) NSURL *bookmarkURLPath;

- (id)init;
- (void).cxx_destruct;
- (id)generateBookmark;
- (id)generateBookmarkURLPath;
- (void)logMetrics;
- (void)writeBookmarkToFile:(id)a0;

@end
