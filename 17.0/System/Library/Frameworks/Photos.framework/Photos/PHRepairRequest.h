@class NSSet, PLProgressFollower, PHAssetResource;

@interface PHRepairRequest : PHMediaRequest {
    PLProgressFollower *_progressFollower;
}

@property (readonly, nonatomic) PHAssetResource *resource;
@property (readonly, nonatomic) NSSet *errorCodes;

- (BOOL)isSynchronous;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startRequest;
- (id)_sendRepairRequestWithReply:(id /* block */)a0;
- (id)initWithRequestID:(int)a0 requestIndex:(unsigned long long)a1 contextType:(long long)a2 managerID:(unsigned long long)a3 asset:(id)a4 assetResource:(id)a5 errorCodes:(id)a6 delegate:(id)a7;

@end
