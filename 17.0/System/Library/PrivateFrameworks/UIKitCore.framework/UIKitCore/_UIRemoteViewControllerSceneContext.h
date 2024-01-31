@class FBSDisplayIdentity;

@interface _UIRemoteViewControllerSceneContext : NSObject <NSCopying, NSSecureCoding> {
    BOOL _enhancedWindowingEnabled;
    BOOL _isCapturingContentForAdditionalRenderingDestination;
    FBSDisplayIdentity *_displayIdentity;
    long long _screenReferenceDisplayModeStatus;
    double _systemReferenceAngle;
    unsigned long long _systemReferenceAngleMode;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayIdentity:(id)a0 screenReferenceDisplayModeStatus:(long long)a1 enhancedWindowEnabled:(BOOL)a2 systemReferenceAngle:(double)a3 systemReferenceAngleMode:(unsigned long long)a4 isCapturingContentForAdditionalRenderingDestination:(BOOL)a5;

@end
