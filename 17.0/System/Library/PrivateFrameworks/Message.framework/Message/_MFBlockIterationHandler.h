@class MFActivityMonitor;

@interface _MFBlockIterationHandler : NSObject <MFSearchResultHandler, QueryProgressMonitor> {
    id /* block */ _block;
    BOOL _cancelled;
    MFActivityMonitor *_monitor;
}

- (id)initWithBlock:(id /* block */)a0;
- (BOOL)handleMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldCancel;

@end
