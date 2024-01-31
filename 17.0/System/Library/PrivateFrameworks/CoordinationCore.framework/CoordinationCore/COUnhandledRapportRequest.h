@class COMeshRequest, NSString, NSDictionary;

@interface COUnhandledRapportRequest : COUnhandledRequest

@property (readonly, nonatomic) COMeshRequest *request;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *data;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 identifier:(id)a1 data:(id)a2 options:(id)a3 handler:(id /* block */)a4 at:(unsigned long long)a5;

@end
