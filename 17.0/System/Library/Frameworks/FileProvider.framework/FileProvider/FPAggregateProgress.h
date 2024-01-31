@class NSMutableArray;

@interface FPAggregateProgress : NSProgress {
    NSMutableArray *_childProgresses;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)addChild:(id)a0;
- (void)startReportingProgress;

@end
