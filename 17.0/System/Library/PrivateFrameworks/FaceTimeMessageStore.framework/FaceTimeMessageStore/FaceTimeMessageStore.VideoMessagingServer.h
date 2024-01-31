@class NSData, _TtC20FaceTimeMessageStore18SandboxExtendedURL, NSError;

@interface FaceTimeMessageStore.VideoMessagingServer : _TtCs12_SwiftObject <FaceTimeMessageStore.VideoMessagingXPCServerInterface> {
    void /* unknown type, empty encoding */ fileTransferer;
    void /* unknown type, empty encoding */ assetManager;
    void /* unknown type, empty encoding */ outgoingMessageCache;
}

- (void)sendVideoMessageWithData:(NSData *)a0 url:(_TtC20FaceTimeMessageStore18SandboxExtendedURL *)a1 completionHandler:(void (^)(NSError *))a2;

@end
