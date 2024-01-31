@class NSMutableArray;
@protocol DVTOutputStream, DVTInputStream;

@interface DTKTraceTapMessageHandler : DTTapMessageHandler {
    id<DVTInputStream, DVTOutputStream> _datastream;
    NSMutableArray *_rawMessages;
    unsigned int _tapVersion;
    unsigned int _coreCount;
    long long _triggerCount;
    unsigned int *_triggerIDs;
}

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)messageReceived:(id)a0;

@end
