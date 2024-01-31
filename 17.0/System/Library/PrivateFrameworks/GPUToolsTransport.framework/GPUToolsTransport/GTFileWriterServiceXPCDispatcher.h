@protocol GTFileWriterService;

@interface GTFileWriterServiceXPCDispatcher : GTXPCDispatcher <GTFileWriterServiceXPCDispatcher> {
    id<GTFileWriterService> _service;
}

- (void).cxx_destruct;
- (void)beginTransferSessionWithFileEntries_basePath_toDevice_options_sessionID_completionHandler_:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1;
- (void)initiateTransfer_basePath_fromDevice_options_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)startTransfer_basePath_fromDevice_options_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)writeFileData_sessionID_completionHandler_:(id)a0 replyConnection:(id)a1;

@end
