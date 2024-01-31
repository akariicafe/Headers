@class NSString, NWConcrete_nw_connection, NSObject;
@protocol OS_nw_parameters, OS_nw_path_evaluator, OS_nw_endpoint;

@interface NWConcrete_nw_unique_connection_request : NSObject <OS_nw_unique_connection_request> {
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *userParameters;
    char service[436];
    unsigned long long sequenceNumber;
    unsigned long long uniqueID;
    unsigned char uuid[16];
    unsigned char signature[64];
    char *incomingReqBytesToVerify;
    unsigned int incomingReqBytesToVerifyLen;
    NWConcrete_nw_connection *connection;
    NSObject<OS_nw_path_evaluator> *pathEvaluator;
    id /* block */ requestCompletionBlock;
    void *rejectTimer;
    void *preexistingConnectionTimer;
    unsigned char isIncoming : 1;
    unsigned char isPending : 1;
    unsigned char pendingRequestAccepted : 1;
    unsigned char isWaitingForListenerReady : 1;
    unsigned char isWaitingForActiveConnection : 1;
    unsigned char hasRequestedPubKey : 1;
    unsigned char hasBeenProcessed : 1;
    unsigned char isWaitingForPathUpdate : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
