@interface ACSURLSessionDataTask : ACSURLSessionTask

@property (copy) id /* block */ _clientDataCompletionHandler;

- (BOOL)_isUpload;
- (void).cxx_destruct;
- (id)initWithNSURLDataTaskCreator:(id /* block */)a0 initialRequest:(id)a1 forSession:(id)a2;

@end
