@class NSString;

@interface PDXPCApplicationInfo : NSObject

@property (readonly, nonatomic) NSString *displayID;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic, getter=isRunning) BOOL running;

- (id)init;
- (id)initWithPID:(int)a0;
- (void).cxx_destruct;

@end
