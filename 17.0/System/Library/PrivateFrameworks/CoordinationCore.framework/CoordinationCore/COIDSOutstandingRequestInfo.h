@class COMeshRequest, NSObject;
@protocol OS_nw_activity;

@interface COIDSOutstandingRequestInfo : NSObject

@property (nonatomic) unsigned long long enqeueStart;
@property (copy, nonatomic) COMeshRequest *request;
@property (readonly, nonatomic) NSObject<OS_nw_activity> *activity;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 at:(unsigned long long)a1 callback:(id /* block */)a2 activity:(id)a3;

@end
