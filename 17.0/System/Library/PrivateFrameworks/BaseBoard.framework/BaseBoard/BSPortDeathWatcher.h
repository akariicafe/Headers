@interface BSPortDeathWatcher : BSPortDeathSentinel

- (id)initWithPort:(unsigned int)a0 queue:(id)a1 deathHandler:(id /* block */)a2;
- (id)initWithSendRight:(id)a0 queue:(id)a1 deathHandler:(id /* block */)a2;

@end
