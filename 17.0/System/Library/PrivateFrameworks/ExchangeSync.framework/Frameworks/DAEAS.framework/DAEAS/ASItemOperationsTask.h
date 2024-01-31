@class NSArray, ASMailMessage;

@interface ASItemOperationsTask : ASTask {
    NSArray *_commands;
    int _numReplacedItems;
    int _bodyTruncationBytes;
    int _mimeSupport;
    ASMailMessage *_streamingMailMessage;
}

- (id)requestBody;
- (id)init;
- (void).cxx_destruct;
- (void)setCommands:(id)a0;
- (id)commands;
- (void)finishWithError:(id)a0;
- (void)setMIMESupport:(int)a0;
- (int)bodyType;
- (BOOL)processContext:(id)a0;
- (int)_mimeSupportCode;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (BOOL)handleStreamOperation:(int)a0 forCodePage:(int)a1 tag:(int)a2 withParentItem:(id)a3 withData:(char *)a4 dataLength:(int)a5;
- (int)mimeSupport;
- (id)replacementObjectForEmailItem:(id)a0;
- (void)setBodyTruncationBytes:(int)a0;
- (void)setStreamingMailMessage:(id)a0;
- (id)streamingMailMessage;
- (long long)taskStatusForExchangeStatus:(int)a0;

@end
