@class NSString;

@interface WiFiUsageLQMWindowAnalysisJoin : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *joinReason;

- (id)addDimensionsTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithRollingWindow:(id)a0 andReasonString:(id)a1 andContext:(struct context { BOOL x0; BOOL x1; BOOL x2; })a2 andTimestamp:(id)a3 onQueue:(id)a4;

@end
