@class NSString, NSDate, NSObject, PKNotifier;
@protocol OS_dispatch_queue;

@interface PKNotification : NSObject

@property (readonly) PKNotifier *notifier;
@property (readonly) int kind;
@property (retain) NSString *headerString;
@property (retain) NSString *messageString;
@property (retain) NSString *defaultButtonTitle;
@property (retain) NSString *alternateButtonTitle;
@property NSObject<OS_dispatch_queue> *resultQueue;
@property (copy) id /* block */ resultHandler;
@property (readonly) NSDate *startTime;
@property (readonly) NSDate *endTime;

- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (void)_interpretResult:(unsigned long long)a0 responseDict:(id)a1;
- (id)_makeDict;
- (unsigned long long)_makeFlags;
- (id)initWithNotifier:(id)a0 notifyKind:(int)a1;

@end
