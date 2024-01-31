@class MFActivityMonitor, NSMutableArray;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor> {
    NSMutableArray *_messages;
    MFActivityMonitor *_monitor;
}

@property (copy, nonatomic) id /* block */ transmogrifier;

- (void)newMessagesAvailable:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldCancel;
- (id)messages;
- (id)copyMessages;

@end
