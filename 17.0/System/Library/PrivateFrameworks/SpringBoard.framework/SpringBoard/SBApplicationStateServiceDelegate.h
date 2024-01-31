@class NSString;

@interface SBApplicationStateServiceDelegate : NSObject <UISApplicationStateServiceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataSourceForApplicationBundleIdentifier:(id)a0;

@end
