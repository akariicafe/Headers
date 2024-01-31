@interface SNDeleteFilesRequest : NSObject <SNRequest> {
    void /* unknown type, empty encoding */ files;
    void /* unknown type, empty encoding */ serverBasePath;
    void /* unknown type, empty encoding */ serverInfo;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithFiles:(id)a0 serverBasePath:(id)a1 serverInfo:(id)a2;

@end
