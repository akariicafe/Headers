@protocol SWScript;

@interface SWQueueableScriptWithCompletion : NSObject

@property (readonly, nonatomic) id<SWScript> script;
@property (readonly, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithScript:(id)a0 completion:(id /* block */)a1;

@end
