@protocol GTBulkDataService;

@interface GTBulkDataServiceXPCDispatcher : GTXPCDispatcher <GTBulkDataServiceXPCDispatcher> {
    id<GTBulkDataService> _service;
}

- (void).cxx_destruct;
- (void)downloadData_usingTransferOptions_chunkHandler_:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1;
- (void)newUploadWithDescriptor_error_:(id)a0 replyConnection:(id)a1;
- (void)uploadChunk_forHandle_isFinalChunk_error_:(id)a0 replyConnection:(id)a1;

@end
