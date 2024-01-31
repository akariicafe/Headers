@class NSString, DTXConnection;

@interface DTTapMessageHandlerArchiver : DTTapMessageHandler <DTXAllowedRPC> {
    DTXConnection *_helperConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)messageReceived:(id)a0;
- (void)_helperConnectionError;
- (id)initWithConfig:(id)a0 archiveURL:(id)a1;

@end
