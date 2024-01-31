@class NSDictionary, AMSUIActionContext, NSError;

@interface AMSUIActionRunner : NSObject

+ (id)handle:(id)a0 context:(id)a1;
+ (BOOL)canHandle:(id)a0 context:(id)a1;
+ (void)handle:(NSDictionary *)a0 context:(AMSUIActionContext *)a1 completionHandler:(void (^)(NSDictionary *, NSError *))a2;

- (id)init;
- (void).cxx_destruct;

@end
