@class NSString, NSMutableDictionary, BLTPBProtobufSequenceNumberManager, NSMutableArray;
@protocol BLTAbstractIDSDevice;

@interface BLTTestIDSService : NSObject <BLTAbstractIDSService> {
    NSString *_service;
    NSMutableDictionary *_actionsByRequestType;
    NSMutableDictionary *_actionsByResponseType;
    NSMutableArray *_delegates;
    unsigned long long _currentIdentifier;
    BLTPBProtobufSequenceNumberManager *_sequenceNumberManager;
}

@property (readonly, nonatomic) id<BLTAbstractIDSDevice> defaultPairedDevice;
@property (nonatomic) unsigned long long minimumSendDelay;
@property (nonatomic) unsigned long long maximumSendDelay;
@property (nonatomic) unsigned long long minimumResponseDelay;
@property (nonatomic) unsigned long long maximumResponseDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)removeDelegate:(id)a0;
- (BOOL)sendProtobuf:(id)a0 toDestinations:(id)a1 priority:(long long)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (id)initWithService:(id)a0;
- (void).cxx_destruct;
- (void)setProtobufAction:(SEL)a0 forIncomingRequestsOfType:(unsigned short)a1;
- (void)setProtobufAction:(SEL)a0 forIncomingResponsesOfType:(unsigned short)a1;
- (BOOL)sendResourceAtURL:(id)a0 metadata:(id)a1 toDestinations:(id)a2 priority:(long long)a3 options:(id)a4 identifier:(id *)a5 error:(id *)a6;
- (void)_callDelegateActionForProtobuf:(id)a0 delegate:(id)a1 identifier:(id)a2 type:(unsigned short)a3 isResponse:(BOOL)a4;
- (void)_handleProtobuf:(id)a0 identifier:(id)a1 sendDelay:(unsigned long long)a2;
- (id)_lightsAndSirensRequestForProtobuf:(id)a0;
- (unsigned long long)_randomResponseDelay;
- (unsigned long long)_randomSendDelay;
- (unsigned long long)_randomValueBetweenMin:(unsigned long long)a0 max:(unsigned long long)a1;
- (void)_sendBlockToAllDelegatesAfterTime:(unsigned long long)a0 block:(id /* block */)a1;
- (void)_sendLightsAndSirensRequestForProtobuf:(id)a0 identifier:(id)a1 sendDelay:(unsigned long long)a2;
- (void)_sendSetSectionInfoResponseWithIdentifier:(id)a0 sendDelay:(unsigned long long)a1;

@end
