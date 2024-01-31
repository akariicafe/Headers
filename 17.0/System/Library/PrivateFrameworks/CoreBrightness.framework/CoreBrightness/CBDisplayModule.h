@class NSString;

@interface CBDisplayModule : CBModule <CBContainerModuleProtocol, CBStatusInfoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyIdentifiers;
- (id)copyPropertyForKey:(id)a0;
- (void)start;
- (void)stop;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyPropertyInternalForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;

@end
