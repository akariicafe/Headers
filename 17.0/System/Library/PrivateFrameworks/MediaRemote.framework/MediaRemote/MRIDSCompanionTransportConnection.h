@class NSString, MRIDSCompanionConnection, NSError;

@interface MRIDSCompanionTransportConnection : MRExternalDeviceTransportConnection <NSStreamDelegate> {
    MRIDSCompanionConnection *_connection;
    NSError *_error;
}

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)runLoop;
- (void)setRunLoop:(id)a0;
- (void)closeWithError:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)error;
- (id)exportEndpoint:(id)a0;
- (id)_exportDescriptorForOutputDevice:(id)a0 endpoint:(id)a1 remoteControl:(BOOL)a2;
- (long long)_idsPriorityFromPriority:(long long)a0;
- (id)exportOutputDevice:(id)a0 endpoint:(id)a1;
- (void)ingestData:(id)a0;
- (id)initWithConnection:(id)a0 type:(id)a1 destination:(id)a2 session:(id)a3;
- (unsigned long long)sendTransportData:(id)a0 options:(id)a1;

@end
