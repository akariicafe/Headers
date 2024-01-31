@class NSString;

@interface AMSRBSKeepAlive : NSObject {
    void /* unknown type, empty encoding */ keepAlive;
    void /* unknown type, empty encoding */ name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ style;

+ (void)keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (id)keepAliveWithName:(id)a0 style:(long long)a1;
+ (id)keepAliveWithName:(id)a0;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
