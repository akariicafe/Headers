@interface SNCopyFilesRequest : NSObject <SNRequest> {
    void /* unknown type, empty encoding */ serverInfo;
    void /* unknown type, empty encoding */ serverFilePaths;
    void /* unknown type, empty encoding */ serverBasePath;
    void /* unknown type, empty encoding */ localDestinationPath;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithServerInfo:(id)a0 serverBasePath:(id)a1 serverFilePaths:(id)a2 localDestinationPath:(id)a3;

@end
