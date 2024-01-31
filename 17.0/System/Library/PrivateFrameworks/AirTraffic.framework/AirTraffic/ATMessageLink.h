@class NSString;

@interface ATMessageLink : NSObject <ATMessageLink>

@property (readonly, nonatomic, getter=isInitialized) BOOL initialized;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (readonly, nonatomic) int endpointType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeObserver:(id)a0;
- (void)sendResponse:(id)a0 withCompletion:(id /* block */)a1;
- (void)addObserver:(id)a0;
- (void)addRequestHandler:(id)a0 forDataClass:(id)a1;
- (void)sendRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendResponse:(id)a0 withProgress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)removeRequestHandlerForDataClass:(id)a0;

@end
