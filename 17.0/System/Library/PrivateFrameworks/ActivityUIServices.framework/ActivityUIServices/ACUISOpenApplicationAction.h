@class NSSet;

@interface ACUISOpenApplicationAction : BSAction

@property (readonly) NSSet *launchActions;

- (id)initWithURL:(id)a0;
- (id)init;
- (id)initWithNSUserActivity:(id)a0;

@end
