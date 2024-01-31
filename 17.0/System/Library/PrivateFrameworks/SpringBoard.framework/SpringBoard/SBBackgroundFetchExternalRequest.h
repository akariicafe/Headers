@class SBBackgroundFetchTask, UIFetchContentInBackgroundAction;

@interface SBBackgroundFetchExternalRequest : NSObject {
    SBBackgroundFetchTask *_task;
}

@property (readonly, nonatomic) UIFetchContentInBackgroundAction *action;

- (void)dealloc;
- (void)execute;
- (void).cxx_destruct;
- (id)initForAppInfo:(id)a0;

@end
