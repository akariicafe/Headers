@class SBSPortalSource;

@interface SBSSystemAperturePortalSourceInfoRequest : NSObject

@property (class, retain, nonatomic, setter=_setPortalSource:) SBSPortalSource *_portalSource;

+ (void)rootWindowPortalSourceWithCompletion:(id /* block */)a0;

@end
