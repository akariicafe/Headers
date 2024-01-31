@class NSString;
@protocol SWSession, SWLogger, SWScriptsManager;

@interface SWSessionManager : NSObject <SWSessionManager>

@property (readonly, nonatomic) id<SWScriptsManager> scriptsManager;
@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly, nonatomic) id<SWSession> session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refresh;
- (void).cxx_destruct;
- (id)initWithScriptsManager:(id)a0 logger:(id)a1;

@end
