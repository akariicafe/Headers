@protocol LNConnectionHostInterface;

@interface LNInProcessConnection : LNConnection {
    id<LNConnectionHostInterface> _connectionInterface;
}

- (id)connectionInterface;
- (void).cxx_destruct;
- (void)connectWithOptions:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 error:(id *)a2;
- (BOOL)refreshWithOptions:(id)a0;

@end
