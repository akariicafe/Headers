@class NSDictionary, NSMutableDictionary;

@interface IMBaseCommandHandlerRegistry : NSObject

@property (readonly, nonatomic) NSDictionary *handlers;
@property (readonly, nonatomic) NSMutableDictionary *standardHandlers;
@property (readonly, nonatomic, getter=isLockedDown) BOOL lockedDown;
@property (readonly, nonatomic) NSMutableDictionary *lockdownHandlers;

- (id)noopHandlerForCommand:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)canAddCommand:(id)a0;
- (id)handlerForCommand:(id)a0;
- (BOOL)hasHandlerForCommand:(id)a0;
- (BOOL)hasLockdownHandlerForCommand:(id)a0;
- (void)setLockdownHandler:(id)a0 forCommand:(id)a1;
- (void)setPassThroughLockdownHandlerForCommand:(id)a0;
- (void)setStandardHandler:(id)a0 forCommand:(id)a1;

@end
