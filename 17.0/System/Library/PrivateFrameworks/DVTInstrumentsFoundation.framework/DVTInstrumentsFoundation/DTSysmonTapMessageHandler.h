@class NSData;

@interface DTSysmonTapMessageHandler : DTTapMessageHandler {
    unsigned int _tapVersion;
    NSData *_nextSampleData;
}

- (void).cxx_destruct;
- (id)messageReceived:(id)a0;

@end
