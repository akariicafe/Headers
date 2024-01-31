@class NSString;

@interface WFWidgetWorkflowFetchRequest : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long limit;
@property (readonly, nonatomic) unsigned long long retryCount;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFetchType:(unsigned long long)a0 identifier:(id)a1 limit:(unsigned long long)a2 retryCount:(unsigned long long)a3 completionHandler:(id /* block */)a4;

@end
