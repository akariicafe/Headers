@class FCNetworkEvent, NSString, NSArray, NSURL, FCEdgeCacheHint, NSMutableDictionary, NSDictionary, NSError, NSMutableArray;

@interface FCCKDirectRequestOperation : FCOperation {
    BOOL _production;
    BOOL _operationFailsOnRequestFailure;
    BOOL _ignoreCache;
    int _networkEventType;
    NSArray *_requests;
    NSURL *_baseURL;
    NSString *_containerName;
    long long _requestType;
    double _timeoutIntervalForRequest;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    id /* block */ _criticalNodeFailureTest;
    id /* block */ _requestCompletionHandler;
    NSString *_requestUUID;
    FCNetworkEvent *_networkEvent;
    NSMutableArray *_resultResponses;
    NSMutableDictionary *_resultErrorsByRequestID;
    NSError *_resultError;
}

- (id)init;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
