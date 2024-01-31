@class NSDictionary, NSURL, VUIAppContext;

@interface VUIActionAppPunchout : VUIAction

@property (retain, nonatomic) NSDictionary *metrics;
@property (readonly, nonatomic) NSURL *punchoutURL;
@property (readonly, nonatomic) BOOL isSensitiveURL;
@property (weak, nonatomic) VUIAppContext *appContext;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (id)_addMusicAppMetricsToUrl:(id)a0;
- (void)_openPunchoutURL:(id)a0;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
