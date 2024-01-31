@class CVNLPActivationMatrix;

@interface CHActivationMatrix : NSObject

@property (retain, nonatomic) CVNLPActivationMatrix *activations;
@property (nonatomic) BOOL unlikelyHasLatinContents;

- (void).cxx_destruct;
- (id)initWithActivations:(id)a0;

@end
