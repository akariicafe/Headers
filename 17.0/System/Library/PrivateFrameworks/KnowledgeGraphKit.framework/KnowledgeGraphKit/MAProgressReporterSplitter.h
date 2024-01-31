@class MAProgressReporter;

@interface MAProgressReporterSplitter : NSObject {
    MAProgressReporter *_progressReporter;
    double _previousCheckpoint;
}

- (void).cxx_destruct;
- (id)childProgressReporterToCheckpoint:(double)a0;
- (id)initWithProgressReporter:(id)a0;

@end
