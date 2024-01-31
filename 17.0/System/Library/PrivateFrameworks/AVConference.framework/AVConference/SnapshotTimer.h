@interface SnapshotTimer : NSObject

@property (nonatomic) BOOL taskIsComplete;

+ (void)takeSnapshotForTask:(id)a0;

- (void)checkout;
- (id)init;
- (void)checkinWithTimeout:(double)a0 forTask:(id)a1;

@end
