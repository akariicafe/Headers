@class NSString, CHDelegateController;
@protocol CHCallInteractionDataSource;

@interface CHCallInteractionManager : NSObject <CHCallInteractionDataSourceDelegate, CHCallInteractionManager>

@property (readonly, nonatomic) id<CHCallInteractionDataSource> dataSource;
@property (readonly, nonatomic) CHDelegateController *delegateController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (id)init;
- (void)removeDelegate:(id)a0;
- (void)callInteractionsDidChangeForDataSource:(id)a0;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;

@end
