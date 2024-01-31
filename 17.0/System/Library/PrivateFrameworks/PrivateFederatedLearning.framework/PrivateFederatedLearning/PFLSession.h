@protocol PFLResumable, PFLDataSource;

@interface PFLSession : NSObject

@property (retain, nonatomic) id<PFLResumable> underlyingTask;
@property (retain, nonatomic) id<PFLDataSource> dataSource;

+ (id)sharedInstance;
+ (id)sessionForTesting;

- (id)init;
- (void)suspend;
- (BOOL)resume;
- (void).cxx_destruct;
- (BOOL)registerWithSource:(id)a0;
- (void)updateModel:(id)a0 modelConfiguration:(id)a1 layerNamesToPrivatize:(id)a2 privatizationIdentifier:(id)a3 privatizationNormMax:(double)a4 privatizationNormBinCount:(unsigned long long)a5 completionHandler:(id /* block */)a6;

@end
