@class NSURLSession, NSURLSessionTask, NSMutableURLRequest, NSURLResponse, NSString;

@interface VSJSXMLHTTPRequest : VSJSEventTargetObject <VSJSXMLHTTPRequest>

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionTask *sessionTask;
@property (retain, nonatomic) NSMutableURLRequest *request;
@property (retain, nonatomic) NSURLResponse *urlResponse;
@property (nonatomic) BOOL requestSent;
@property (nonatomic) unsigned long long readyState;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSString *statusText;
@property (retain, nonatomic) NSString *responseText;
@property (retain, nonatomic) id response;
@property (nonatomic) unsigned long long timeout;
@property (retain, nonatomic) NSString *responseType;

- (void)abort;
- (void)send:(id)a0;
- (id)init;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)getAllResponseHeaders;
- (id)getResponseHeader:(id)a0;
- (void)_cancelCurrentRequestAndNotify:(BOOL)a0;
- (void)_notifyWithFunctionName:(id)a0 eventName:(id)a1 info:(id)a2;
- (void)open:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4;
- (void)setRequestHeader:(id)a0 :(id)a1;

@end
