@class _UIOEditMenuPresentationConfiguration;

@interface _UIORequestEditMenuPresentationAction : _UIOServerAction

@property (readonly, nonatomic) _UIOEditMenuPresentationConfiguration *configuration;

- (BOOL)isPermitted;
- (id)initWithConfiguration:(id)a0 view:(id)a1;
- (void)performActionFromConnection:(id)a0;

@end
