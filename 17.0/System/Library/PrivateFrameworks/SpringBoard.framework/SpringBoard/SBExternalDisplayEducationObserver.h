@class SBExternalDisplayEducationSession;
@protocol BNPosting;

@interface SBExternalDisplayEducationObserver : NSObject {
    id<BNPosting> _bannerPoster;
    SBExternalDisplayEducationSession *_educationSession;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_deviceConnectionWindowExpired:(id)a0;
- (void)_extendedDisplayControllerDidConnect:(id)a0;
- (void)_extendedDisplayControllerDidDisconnect:(id)a0;
- (void)_hardwareAvailabilityChanged:(id)a0;
- (id)initWithBannerPoster:(id)a0;

@end
