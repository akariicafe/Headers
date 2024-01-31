@class NSString, DKReporterContext, DKComponentIdentity;

@interface DKReporterController : NSObject <DKReporter_Internal, DKReporter, NSExtensionRequestHandling>

@property (retain, nonatomic) DKReporterContext *context;
@property (retain, nonatomic) DKComponentIdentity *componentIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (BOOL)isPresent;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)populateAttributes:(id)a0;
- (void)setupWithContext:(id)a0;

@end
