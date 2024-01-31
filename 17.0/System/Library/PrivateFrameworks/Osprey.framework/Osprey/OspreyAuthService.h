@class NSUUID, OspreyGRPCChannel;

@interface OspreyAuthService : NSObject {
    OspreyGRPCChannel *_channel;
    NSUUID *_authUUID;
    unsigned long long _authStrategyVersion;
}

- (void).cxx_destruct;
- (void)certificateDataWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void)createClientSessionWithData:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (id)initWithChannel:(id)a0 authStrategyVersion:(unsigned long long)a1;

@end
