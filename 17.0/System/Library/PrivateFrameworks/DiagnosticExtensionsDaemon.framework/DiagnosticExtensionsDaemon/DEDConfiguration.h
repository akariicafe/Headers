@class NSXPCListener;

@interface DEDConfiguration : NSObject

@property (retain) NSXPCListener *anonymousListener;

+ (id)sharedInstance;

- (const char *)loggingSubsystem;
- (id)errorDomain;
- (unsigned long long)connectionType;
- (id)identifier;
- (id)dedDirectory;
- (void).cxx_destruct;
- (id)machServiceName;
- (id)sharedAnonymousListener;
- (void)invalidateTestListeners;

@end
