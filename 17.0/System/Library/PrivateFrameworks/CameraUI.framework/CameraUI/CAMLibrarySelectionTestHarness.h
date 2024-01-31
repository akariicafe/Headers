@class CAMLibrarySelectionController;

@interface CAMLibrarySelectionTestHarness : CAMPerformanceTestHarness

@property (readonly, nonatomic) CAMLibrarySelectionController *librarySelectionController;

- (id)init;
- (void).cxx_destruct;
- (void)startTesting;
- (id)initWithTestName:(id)a0;
- (id)initWithTestName:(id)a0 librarySelectionController:(id)a1;

@end
