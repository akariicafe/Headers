@class NSURL, GKPlayer;

@interface GKReportProblemRemoteUIController : GKRemoteUIController

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) GKPlayer *problemPlayer;

+ (id)controllerForProblemPlayer:(id)a0 completionHandler:(id /* block */)a1;

- (id)fallbackURL;
- (id)bagKey;
- (void).cxx_destruct;
- (id)initWithProblemPlayer:(id)a0;
- (id)postBodyForInitialLoad;
- (int)preferredLayoutStyle;

@end
