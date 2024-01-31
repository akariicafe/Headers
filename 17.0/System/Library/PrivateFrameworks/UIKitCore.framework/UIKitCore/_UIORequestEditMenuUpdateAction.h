@class NSString, UIMenu;

@interface _UIORequestEditMenuUpdateAction : _UIOServerAction

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIMenu *updatedMenu;
@property (readonly, nonatomic) long long reason;

- (BOOL)isPermitted;
- (id)initWithConfigurationIdentifier:(id)a0 updatedMenu:(id)a1 reason:(long long)a2;
- (void)performActionFromConnection:(id)a0;

@end
