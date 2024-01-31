@interface _LSDRebuildClient : _LSDClient <_LSDRebuildServiceProtocol>

- (id)initWithXPCConnection:(id)a0;
- (void)noteMigratorRunningWithReply:(id /* block */)a0;
- (void)performRebuildRegistration:(id)a0 personaUniqueStrings:(id)a1 reply:(id /* block */)a2;

@end
