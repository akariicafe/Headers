@interface HUFakeXPCClient : HCXPCClient {
    id /* block */ _updateBlock;
}

- (void).cxx_destruct;
- (BOOL)sendMessage:(id)a0 errorBlock:(id /* block */)a1;
- (BOOL)wantsUpdatesForIdentifier:(unsigned long long)a0;
- (void)registerMessageBlock:(id /* block */)a0;

@end
