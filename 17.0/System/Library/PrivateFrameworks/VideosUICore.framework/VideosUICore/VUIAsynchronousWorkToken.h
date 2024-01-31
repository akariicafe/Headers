@class NSOperation;

@interface VUIAsynchronousWorkToken : NSObject

@property (retain, nonatomic) NSOperation *operation;

- (id)init;
- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
