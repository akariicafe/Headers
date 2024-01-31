@class NSString, RBSProcessStateUpdate;

@interface ARProcessMonitorStateUpdate : NSObject {
    RBSProcessStateUpdate *_update;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) long long taskState;
@property (readonly, nonatomic) long long debugState;
@property (readonly, nonatomic) BOOL isVisible;

- (id)description;
- (void).cxx_destruct;
- (id)initWithARProcessTaskState:(long long)a0;
- (id)initWithRBSProcessStateUpdate:(id)a0;

@end
