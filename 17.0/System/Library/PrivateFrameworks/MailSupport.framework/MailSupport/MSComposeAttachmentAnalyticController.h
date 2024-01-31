@class MSDiagnosticManager;

@interface MSComposeAttachmentAnalyticController : NSObject {
    long long _totalDrawingsInsertedCount;
}

@property (retain, nonatomic) MSDiagnosticManager *diagnosticManager;

- (void).cxx_destruct;
- (void)_submitFinalDrawingInsertCount:(long long)a0 sentMessage:(BOOL)a1;
- (void)abandonMessageWithActualDrawingInsertCount:(long long)a0;
- (id)initWithDiagnosticManager:(id)a0 totalDrawingsInsertedCount:(long long)a1;
- (void)sendMessageWithActualDrawingInsertCount:(long long)a0;

@end
