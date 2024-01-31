@class RPStreamSession, NSUUID, NSString;

@interface CMContinuityCaptureTransportDeviceRapportStream : NSObject <ContinuityCaptureTransportDeviceStream> {
    RPStreamSession *_stream;
    long long _entity;
}

@property (readonly, retain) RPStreamSession *stream;
@property (readonly) long long entity;
@property (readonly, retain) NSUUID *streamUUID;
@property (readonly, retain) NSString *streamIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sendMessage:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (id)cipherKeyforSessionID:(id)a0;
- (void)enqueueResponse:(id)a0 identifier:(id)a1;
- (id)initWithRapportStream:(id)a0;
- (BOOL)isMediaStream;

@end
