@interface AMSBagUnderlyingDataPersistence : NSObject {
    void /* unknown type, empty encoding */ directoryURL;
}

+ (id)persistenceWithDefaultDirectory;

- (id)initWithDirectoryURL:(id)a0;
- (id)init;
- (BOOL)persist:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)removeUnderlyingDataFor:(id)a0 error:(id *)a1;
- (id)underlyingDataFor:(id)a0 error:(id *)a1;

@end
