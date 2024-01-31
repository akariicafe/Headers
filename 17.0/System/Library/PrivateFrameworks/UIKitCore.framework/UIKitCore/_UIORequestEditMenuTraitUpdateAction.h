@class NSString;

@interface _UIORequestEditMenuTraitUpdateAction : _UIOServerAction

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long userInterfaceStyle;

- (BOOL)isPermitted;
- (id)initWithConfigurationIdentifier:(id)a0 userInterfaceStyle:(long long)a1;
- (void)performActionFromConnection:(id)a0;

@end
