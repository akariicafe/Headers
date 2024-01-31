@class BKSWindowServerHitTestSecurityAnalysis, NSString;

@interface _UITouchAuthenticationRecord : NSObject {
    BOOL _hostSupportsStrictTouchVerification;
    NSString *_hostBundleId;
}

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) BKSWindowServerHitTestSecurityAnalysis *hitTestSecurityAnalysis;
@property (readonly, nonatomic) unsigned long long transformGradeFailureReasons;
@property (nonatomic) BOOL eventLeadToSensitiveDataTransmission;
@property (readonly, nonatomic) BOOL touchIsAuthentic;

- (void).cxx_destruct;
- (BOOL)touchIsAuthenticWithVerificationStrategy:(long long)a0;

@end
