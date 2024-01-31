@class SASSystemState;

@interface SASRequestOptionsBuilder : NSObject

@property (retain, nonatomic) SASSystemState *systemState;
@property (nonatomic) long long presentationIdentifier;

- (BOOL)_siriIsEnabled;
- (void).cxx_destruct;
- (id)_createRequestOptionsForRequest:(id)a0 withDataSource:(id)a1;
- (id)buildOptionsWithRequest:(id)a0 presentationIdentifier:(long long)a1 dataSource:(id)a2;

@end
