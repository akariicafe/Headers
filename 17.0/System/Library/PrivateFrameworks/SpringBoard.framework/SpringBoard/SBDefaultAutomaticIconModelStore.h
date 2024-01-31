@interface SBDefaultAutomaticIconModelStore : SBIconModelPropertyListFileStore

@property (class, readonly) SBDefaultAutomaticIconModelStore *sharedInstance;

- (id)init;

@end
