@interface SNFileServer : NSObject {
    void /* unknown type, empty encoding */ server;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ link;
    void /* unknown type, empty encoding */ rootDirectory;
}

+ (id)createDefaultServer;

- (id)init;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRootDirectory:(id)a0;

@end
