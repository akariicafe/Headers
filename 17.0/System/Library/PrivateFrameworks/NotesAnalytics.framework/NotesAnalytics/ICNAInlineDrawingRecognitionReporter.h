@class NSMutableDictionary;

@interface ICNAInlineDrawingRecognitionReporter : ICNAObject

@property (retain, nonatomic) NSMutableDictionary *stagedReports;

+ (id)sharedReporter;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)createReportForDrawing:(id)a0 drawingID:(id)a1 insideNote:(id)a2;
- (void)reportNotification:(id)a0;
- (void)submitReports;

@end
