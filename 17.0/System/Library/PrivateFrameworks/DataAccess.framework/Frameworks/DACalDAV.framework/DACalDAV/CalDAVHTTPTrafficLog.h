@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject

@property (retain, nonatomic) DACoreDAVLogger *curLogger;

+ (id)instance;

- (id)init;
- (BOOL)enabled;
- (void).cxx_destruct;
- (void)logString:(id)a0;
- (void)logData:(id)a0;
- (void)finishSnippets;
- (void)logStringWithFormat:(id)a0;

@end
