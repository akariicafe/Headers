@class NSArray, NSMutableArray;

@interface PHASEConeDirectivityModelParameters : PHASEDirectivityModelParameters {
    NSMutableArray *_internalArray;
}

@property (readonly, nonatomic) NSMutableArray *subbands;
@property (readonly, nonatomic) NSArray *subbandParameters;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSubbandParameters:(id)a0;
- (id)subbandParameters;
- (id)subbands;

@end
