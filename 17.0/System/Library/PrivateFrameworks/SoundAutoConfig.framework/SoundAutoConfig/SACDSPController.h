@class NSString, NSXPCConnection;
@protocol SACServiceDelegate, SACServiceDSPDelegate, SACDSPDelegate;

@interface SACDSPController : NSObject <SACServiceDSPDelegate> {
    NSXPCConnection *mServiceConnection;
    id<SACServiceDelegate> mProxyInterface;
    id<SACServiceDSPDelegate> mSACDSPDelegate;
}

@property (nonatomic) id<SACDSPDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)getDSPInfoByKey:(id)a0 withReply:(id /* block */)a1;
- (void)handleServiceCrash;
- (void)setDSPConfig:(id)a0;
- (void)startServiceConnection;

@end
