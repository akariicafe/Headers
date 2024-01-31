@class VRXVisualResponseProvider;

@interface SearchUIVisualResponseHandler : NSObject

@property (retain, nonatomic) VRXVisualResponseProvider *provider;

- (id)init;
- (void).cxx_destruct;
- (id)buildResponseView:(id)a0 delegate:(id)a1;

@end
