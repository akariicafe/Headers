@class PAAccessInterval, MPGreenTeaLoggerWrapper, PAApplication;

@interface MPMediaLibraryPrivacyContext : NSObject {
    PAApplication *_clientApplication;
    PAAccessInterval *_privacyAccessInterval;
    MPGreenTeaLoggerWrapper *_gtLogger;
}

+ (id)sharedContextForCurrentProcess;
+ (void)initialize;
+ (id)contextForDefaultClient;
+ (void)setDefaultClientWithAuditToken:(struct { unsigned int x0[8]; })a0;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)initWithClientIdentity:(id)a0;
- (id)init;
- (void)beginAccessInterval;
- (id)initWithPAApplication:(id)a0;
- (void).cxx_destruct;
- (void)endAccessInterval;
- (void)logPrivacyAccess;

@end
