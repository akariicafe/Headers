@class NSMutableArray;

@interface FigCaptureSessionMovieFileSinkPipeline : FigCaptureMovieFileSinkPipeline

@property (nonatomic) BOOL momentCaptureMovieRecordingEnabled;
@property (nonatomic) BOOL recording;
@property (nonatomic) BOOL recordedWhileMultitasking;
@property (retain, nonatomic) NSMutableArray *pendingIrisRecordings;
@property (nonatomic) BOOL checkIfFileAlreadyExistForMFO;

- (void)dealloc;

@end
