@class NSString;
@protocol NFCTag;

@interface NFCTagReaderSession : NFCReaderSession <NFReaderSessionCallbacks> {
    id _swiftDelegateWrapper;
}

@property (readonly, retain, nonatomic) id<NFCTag> connectedTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)readingAvailable;

- (void).cxx_destruct;
- (void)didDetectTags:(id)a0 connectedTagIndex:(unsigned long long)a1;
- (void)restartPolling;
- (void)connectToTag:(id)a0 completionHandler:(id /* block */)a1;
- (void)_callbackDidBecomeActive;
- (id)initWithDelegate:(id)a0 sessionDelegateType:(long long)a1 queue:(id)a2 pollMethod:(unsigned long long)a3 sessionConfig:(unsigned long long)a4;
- (id)initWithPollingOption:(long long)a0 delegate:(id)a1 delegateType:(long long)a2 queue:(id)a3;
- (id)initWithPollingOption:(long long)a0 delegate:(id)a1 queue:(id)a2;
- (id)initWithPollingOption:(long long)a0 swiftDelegate:(id)a1 queue:(id)a2;

@end
