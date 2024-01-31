@class NSDate;

@interface NTKTimelineUpdateEndDateOperation : NTKTimelineDataOperation {
    NSDate *_endDate;
}

@property (copy, nonatomic) id /* block */ handler;

- (void)_cancel;
- (void)_start;
- (void).cxx_destruct;
- (void)_getEndDate;
- (void)_invokeHandler;

@end
