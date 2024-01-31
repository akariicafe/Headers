@class KGGraphManager;

@interface KGGraphManagerRecord : NSObject

@property (retain, nonatomic) KGGraphManager *graphManager;
@property (nonatomic) unsigned long long useCount;

- (id)initWithGraphManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)decrementUseCount;
- (void)incrementUseCount;

@end
