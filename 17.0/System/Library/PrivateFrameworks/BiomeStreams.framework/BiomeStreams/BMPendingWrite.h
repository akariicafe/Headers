@interface BMPendingWrite : NSObject

@property (readonly, nonatomic) id event;
@property (readonly, nonatomic) double timestamp;

+ (id)pendingWriteWithEvent:(id)a0 timestamp:(double)a1;

- (void).cxx_destruct;

@end
