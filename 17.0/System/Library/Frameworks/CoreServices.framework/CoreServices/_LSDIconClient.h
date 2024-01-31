@interface _LSDIconClient : _LSDClient <_LSDIconServiceProtocol>

- (void)getAlternateIconNameForIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)setAlternateIconName:(id)a0 forIdentifier:(id)a1 iconsDictionary:(id)a2 reply:(id /* block */)a3;

@end
