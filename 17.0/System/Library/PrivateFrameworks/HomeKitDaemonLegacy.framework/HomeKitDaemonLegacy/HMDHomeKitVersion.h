@interface HMDHomeKitVersion : HMFVersion <NSCopying, NSSecureCoding>

@property (class, readonly) HMDHomeKitVersion *currentVersion;
@property (class, readonly) BOOL supportsSecureCoding;


@end
