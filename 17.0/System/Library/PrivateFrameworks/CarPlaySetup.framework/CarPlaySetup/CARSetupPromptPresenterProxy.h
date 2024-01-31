@class NSString, CARSetupPromptDirector, NSProgress;

@interface CARSetupPromptPresenterProxy : NSObject <CRSetupPromptPresenterService, NSProgressReporting>

@property (weak, nonatomic) CARSetupPromptDirector *director;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

@end
