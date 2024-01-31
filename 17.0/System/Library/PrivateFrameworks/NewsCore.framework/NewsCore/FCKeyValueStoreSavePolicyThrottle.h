@interface FCKeyValueStoreSavePolicyThrottle : FCKeyValueStoreSavePolicy {
    double _delay;
}

- (id)initWithDelay:(double)a0;
- (void)scheduleSaveOnQueue:(id)a0 handler:(id /* block */)a1;

@end
