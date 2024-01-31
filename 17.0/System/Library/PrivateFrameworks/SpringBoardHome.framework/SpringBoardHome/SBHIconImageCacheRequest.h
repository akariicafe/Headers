@class NSUUID, NSMutableArray, NSString;

@interface SBHIconImageCacheRequest : NSObject <BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSMutableArray *completionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addCompletionHandler:(id /* block */)a0;
- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)callCompletionHandlers;
- (void)addCompletionHandlers:(id)a0;

@end
