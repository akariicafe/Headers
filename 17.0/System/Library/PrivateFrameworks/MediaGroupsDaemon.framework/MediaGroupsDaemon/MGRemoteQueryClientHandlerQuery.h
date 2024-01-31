@class MGOutstandingQuery, NSString, MGGroupsMediator;

@interface MGRemoteQueryClientHandlerQuery : NSObject <MGRemoteQueryClientHandlerProtocol>

@property (nonatomic) BOOL seenInitialResponse;
@property (readonly, nonatomic) MGGroupsMediator *groupsMediator;
@property (readonly, nonatomic) MGOutstandingQuery *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handlerWithQuery:(id)a0 forGroupsQueryAgent:(id)a1;

- (void).cxx_destruct;
- (BOOL)validateResponse:(id)a0;
- (id)_initWithQuery:(id)a0 groupsQueryAgent:(id)a1;
- (id)handleCompleteResponse:(id)a0 jsonPayload:(id)a1;
- (void)prepareURL:(id)a0;

@end
