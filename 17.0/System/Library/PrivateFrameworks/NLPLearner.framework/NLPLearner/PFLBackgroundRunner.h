@class _DASActivity, RBSAssertion, NSString, QuickTypePFLBackgroundTask;

@interface PFLBackgroundRunner : NSObject <_DASExtensionRunner>

@property (retain, nonatomic) QuickTypePFLBackgroundTask *task;
@property (retain, nonatomic) RBSAssertion *assertion;
@property (readonly, nonatomic) _DASActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (unsigned char)start;
- (void)cleanup;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)prepareForActivity:(id)a0;

@end
