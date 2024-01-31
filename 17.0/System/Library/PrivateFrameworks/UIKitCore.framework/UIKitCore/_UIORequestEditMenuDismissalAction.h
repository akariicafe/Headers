@class NSString;

@interface _UIORequestEditMenuDismissalAction : _UIOServerAction

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long reason;

- (BOOL)isPermitted;
- (id)initWithConfigurationIdentifier:(id)a0 reason:(long long)a1;
- (void)performActionFromConnection:(id)a0;

@end
