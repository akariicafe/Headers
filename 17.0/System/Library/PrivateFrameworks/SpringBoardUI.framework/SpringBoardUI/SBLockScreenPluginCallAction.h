@class NSURL, TUDialRequest;

@interface SBLockScreenPluginCallAction : SBLockScreenPluginAction {
    TUDialRequest *_dialRequest;
}

@property (readonly, nonatomic) NSURL *url;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)url;
- (BOOL)isCallAction;

@end
