@class NSString;

@interface DMCProfileAbstractViewController : UIViewController <PSStateRestoration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)canBeShownFromSuspendedState;
- (void)updateExtendedLayoutIncludesOpaqueBars;

@end
