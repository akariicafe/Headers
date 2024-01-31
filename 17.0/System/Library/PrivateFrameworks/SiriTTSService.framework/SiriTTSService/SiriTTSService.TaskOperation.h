@class NSString;

@interface SiriTTSService.TaskOperation : NSOperation {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ workflow;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ audioHandler;
    void /* unknown type, empty encoding */ notification;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ workflowError;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;

@end
