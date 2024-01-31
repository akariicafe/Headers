@class NSUUID, NSString, SidecarStream;
@protocol CMContinuityCaptureTransportMessaging;

@interface CMContinuityCaptureTransportDeviceSidecarStream : NSObject <ContinuityCaptureTransportDeviceStream> {
    SidecarStream *_stream;
    long long _entity;
    NSUUID *_streamUUID;
    id<CMContinuityCaptureTransportMessaging> _messageDelegate;
    int _active;
}

@property (readonly, retain) SidecarStream *stream;
@property (readonly) long long entity;
@property (readonly, retain) NSUUID *streamUUID;
@property (readonly, retain) NSString *streamIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)activate:(id /* block */)a0;
- (void)sendMessage:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (id)cipherKeyforSessionID:(id)a0;
- (void)enqueueResponse:(id)a0 identifier:(id)a1;
- (id)initWithSidecarStream:(id)a0 entity:(long long)a1 messageDelegate:(id)a2;
- (BOOL)isMediaStream;

@end
