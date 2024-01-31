@class NSArray, NSString, IRSessionServer, NSObject;
@protocol OS_dispatch_queue;

@interface IRRecommendationService : NSObject <IRXPCService> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) IRSessionServer *xpcServer;
@property (readonly) NSArray *machServicesNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceWithQueue:(id)a0;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldAcceptNewConnection:(id)a0;

@end
