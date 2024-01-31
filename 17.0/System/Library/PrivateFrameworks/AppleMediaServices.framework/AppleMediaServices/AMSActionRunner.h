@class NSDictionary, AMSActionContext, NSError;

@interface AMSActionRunner : NSObject

+ (id)handle:(id)a0 context:(id)a1;
+ (BOOL)canHandle:(id)a0 context:(id)a1;
+ (void)handle:(NSDictionary *)a0 context:(AMSActionContext *)a1 completionHandler:(void (^)(NSDictionary *, NSError *))a2;

- (id)init;
- (void).cxx_destruct;

@end
