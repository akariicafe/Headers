@class _DKSyncRapportCommonStorage;

@interface _DKSyncRapportStorage : NSObject <_DKSyncCommonClass> {
    _DKSyncRapportCommonStorage *_commonStorage;
}

- (id)init;
- (void)setDeviceID:(id)a0;
- (void)handshakeWithDuetSyncPeer:(id)a0 orError:(id)a1;
- (id)client;
- (void)start;
- (void)sendRequestID:(id)a0 request:(id)a1 peer:(id)a2 highPriority:(BOOL)a3 options:(id)a4 responseHandler:(id /* block */)a5;
- (id)transformResponseError:(id)a0;
- (void)fetchSourceDeviceIDFromPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleAvailabilityFailureWithPeer:(id)a0 completion:(id /* block */)a1;
- (BOOL)isTransportActiveForPeer:(id)a0;
- (id)myDeviceID;
- (void).cxx_destruct;
- (void)handshakeWithDuetSyncPeer:(id)a0 completion:(id /* block */)a1;
- (id)name;
- (long long)transportType;
- (void)registerRequestIDsWithClient:(id)a0;
- (BOOL)isAvailable;
- (id)transformCaughtObject:(id)a0 existingError:(id)a1;
- (void)cancelOutstandingOperations;

@end
