@interface HomeKitCore.XPCClientProxy : NSObject <HomeKitCore.XPCServerInterface> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ modelController;
}

- (void)fetchModelsWithType:(long long)a0 completionHandler:(id /* block */)a1;
- (void)fetchModelsWithTypes:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerObserver:(id)a0 modelTypes:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
