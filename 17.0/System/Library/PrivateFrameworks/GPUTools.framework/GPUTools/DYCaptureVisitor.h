@class NSError;

@interface DYCaptureVisitor : NSObject {
    BOOL _abort;
}

@property (retain, nonatomic) NSError *visitCaptureArchiveError;
@property (nonatomic) BOOL visitUnusedResoures;

- (void)abort;
- (id)init;
- (void)visitCaptureArchive:(id)a0;
- (void)visitCaptureArchiveStack:(id)a0;
- (void)visitCaptureStore:(id)a0;
- (void)visitDataFile:(id)a0;
- (void)visitFunctionStreamFile:(id)a0;
- (void)visitInternalFile:(id)a0;

@end
