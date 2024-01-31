@interface ShazamKit.SHManagedSessionWrapperDelegate : NSObject <SHManagedSessionDelegate> {
    void /* unknown type, empty encoding */ multipleResultsContinuation;
    void /* unknown type, empty encoding */ singleResultContinuation;
    void /* unknown type, empty encoding */ spectralDataContinuation;
    void /* unknown type, empty encoding */ lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)didCalculateSpectralData:(id)a0;
- (void)finishedManagedSession:(id)a0;

@end
