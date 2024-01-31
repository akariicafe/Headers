@class GEODataRequestThrottlerToken, NSString, NSError, GEOApplicationAuditToken, GEOPeer, GEOMapServiceTraits, NSObject, NSProgress;
@protocol OS_xpc_object;

@interface GEOXPCRequest : NSObject <GEOXPCSerializable> {
    unsigned char _flags;
    NSObject<OS_xpc_object> *_object;
    NSError *_error;
    NSProgress *_progressToMirrorOverXPC;
}

@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSString *method;
@property (retain, nonatomic) GEOPeer *peer;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic) GEOApplicationAuditToken *preferredAuditToken;
@property (readonly, nonatomic) GEODataRequestThrottlerToken *throttleToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)reportsProgress;

- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void)send:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)sendSync:(id)a0 error:(id *)a1;
- (id)initWithMessage:(id)a0 traits:(id)a1 auditToken:(id)a2 throttleToken:(id)a3;
- (void)send:(id)a0 withReply:(id)a1 handler:(id /* block */)a2;

@end
