@class FBSDisplayLayoutMonitor, NSString;

@interface VCCKApplicationStateObserver : NSObject

@property (readonly, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, getter=isApplicationVisible) BOOL applicationVisible;
@property (nonatomic) _Atomic BOOL atomicApplicationVisible;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;

@end
