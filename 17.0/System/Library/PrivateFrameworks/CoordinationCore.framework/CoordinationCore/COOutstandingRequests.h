@class COStateUpdateRequest;

@interface COOutstandingRequests : NSObject

@property (retain) COStateUpdateRequest *request;
@property (copy) id /* block */ callback;

- (void).cxx_destruct;

@end
