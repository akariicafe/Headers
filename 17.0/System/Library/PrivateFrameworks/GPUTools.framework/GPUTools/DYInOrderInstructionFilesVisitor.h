@class NSArray;

@interface DYInOrderInstructionFilesVisitor : DYCaptureVisitor {
    NSArray *_initialPhaseFiles;
    NSArray *_captureFiles;
    NSArray *_deltaFiles;
}

@property (nonatomic) BOOL visitDeltaFiles;
@property (nonatomic) BOOL unsorted;

- (void)_closeFiles;
- (BOOL)_openFiles:(id)a0;
- (BOOL)_openFilenames:(id)a0 store:(id)a1 filesArray:(id)a2;
- (void)_performVisit:(id)a0;
- (void)performPostCaptureVisitActions;
- (void)performPreCaptureVisitActions;
- (void)performPreVisitActions;
- (void)visitCaptureStore:(id)a0;

@end
