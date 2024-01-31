@class NSURLSession, NSString, NSDictionary, NSURL, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface CPLConfiguration : NSObject {
    NSURL *_configurationFileURL;
    NSDictionary *_configuration;
    NSDate *_lastUpdate;
    double _updateInterval;
    NSURLSession *_currentSession;
    NSObject<OS_dispatch_queue> *_lock;
    double _minUpdateInterval;
    NSString *_updateIntervalKey;
}

+ (void)disableConfigurationFetching;

- (double)_updateInterval;
- (void)_load;
- (void)_save;
- (id)initWithClientLibraryBaseURL:(id)a0;
- (void)invalidate;
- (void)_setContents:(id)a0;
- (void)refetchFromDisk;
- (void).cxx_destruct;
- (id)initWithClientLibraryBaseURL:(id)a0 minUpdateInterval:(double)a1 updateIntervalKey:(id)a2;
- (id)objectForKeyedSubscript:(id)a0;
- (id)valueForKey:(id)a0;
- (void)check;

@end
