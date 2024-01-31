@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (id)init;
- (BOOL)isCancelled;
- (void)teardown;
- (void).cxx_destruct;
- (void)cancel;
- (void)setup;
- (void)quit;
- (id)temporaryDirectoryPath;

@end
