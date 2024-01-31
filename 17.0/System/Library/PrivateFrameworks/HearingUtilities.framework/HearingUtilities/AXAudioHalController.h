@class NSString;

@interface AXAudioHalController : NSObject

@property (retain, nonatomic) NSString *reachableHearingAidsName;
@property (nonatomic) unsigned int plugInID;
@property (copy, nonatomic) id /* block */ routeChangeDispatchBlock;

- (id)init;
- (void).cxx_destruct;
- (void)hearingAidReachabilityDidChange;
- (void)hearingAidConnectionDidChange:(BOOL)a0;
- (void)addAudioHalListener;
- (void)clearAudioHalDevice;
- (unsigned int)getHearingPlugInID;
- (BOOL)processUpdateDescription:(id)a0;
- (void)registerForPropertyUpdate;
- (void)updateHalWithReachableHearingAidsName:(id)a0;

@end
