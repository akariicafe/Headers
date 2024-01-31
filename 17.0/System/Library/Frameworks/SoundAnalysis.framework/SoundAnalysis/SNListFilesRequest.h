@interface SNListFilesRequest : NSObject <SNRequest> {
    void /* unknown type, empty encoding */ serverInfo;
    void /* unknown type, empty encoding */ queryPath;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithServerInfo:(id)a0 queryPath:(id)a1;

@end
