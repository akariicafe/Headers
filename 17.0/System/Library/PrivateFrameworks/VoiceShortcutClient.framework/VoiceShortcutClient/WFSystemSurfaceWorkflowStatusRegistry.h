@class NSUserDefaults;

@interface WFSystemSurfaceWorkflowStatusRegistry : NSObject

@property (readonly, nonatomic) NSUserDefaults *shortcutsUserDefaults;

- (id)init;
- (unsigned long long)statusForServicesWorkflows;
- (unsigned long long)statusForSystemSurface:(unsigned long long)a0;
- (BOOL)setStatus:(unsigned long long)a0 forSystemSurface:(unsigned long long)a1;
- (BOOL)setStatusForShareSheetWorkflows:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)setStatusForServicesWorkflows:(unsigned long long)a0;
- (unsigned long long)statusForShareSheetWorkflows;

@end
