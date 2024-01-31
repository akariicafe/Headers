@class RBSProcessIdentity;

@interface RBPLEvent : NSObject

@property (readonly, nonatomic) unsigned long long event;
@property (readonly, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) int assertionCount;
@property (readonly, nonatomic) int pid;

- (void).cxx_destruct;
- (id)initWithevent:(unsigned long long)a0 identity:(id)a1 assertionCount:(int)a2 pid:(int)a3;

@end
