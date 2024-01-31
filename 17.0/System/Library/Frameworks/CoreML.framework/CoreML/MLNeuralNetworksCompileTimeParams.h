@class NSDictionary, NSArray;

@interface MLNeuralNetworksCompileTimeParams : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long lossType;
@property (nonatomic) long long optimizerType;
@property (retain, nonatomic) NSDictionary *optimizerParameters;
@property (retain, nonatomic) NSDictionary *lossParameters;
@property (retain, nonatomic) NSArray *trainableLayerNames;
@property (retain, nonatomic) NSDictionary *updateParameters;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLossType:(long long)a0 optimizerType:(long long)a1 optimizerParameters:(id)a2 lossParameters:(id)a3 trainableLayerNames:(id)a4 updateParameters:(id)a5;
- (id)unarchiveUpdatableParamsAtURL:(id)a0 error:(id *)a1;
- (BOOL)writeUpdatableParamsToURL:(id)a0 error:(id *)a1;

@end
