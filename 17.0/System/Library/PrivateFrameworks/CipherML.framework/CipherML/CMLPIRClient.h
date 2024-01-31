@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CMLPIRClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, copy, nonatomic) NSString *useCase;

+ (id)new;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithUseCase:(id)a0;
- (id)initWithUseCase:(id)a0 dispatchQueue:(id)a1;
- (id)initWithUseCase:(id)a0 dispatchQueue:(id)a1 connection:(id)a2;
- (BOOL)setPIRConfig:(id)a0 error:(id *)a1;

@end
