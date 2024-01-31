@class SBControlCenterController;

@interface SBControlCenterPresentationObservationToken : SBPresentationObservationToken

@property (readonly, nonatomic) SBControlCenterController *controlCenterController;

- (void)dealloc;
- (long long)state;
- (void).cxx_destruct;
- (id)initWithControlCenterController:(id)a0 scene:(id)a1;

@end
