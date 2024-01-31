@class NSString, DYShaderAnalyzerResult, NSData, NSMutableData, NSNumber;

@interface ShaderBinaryInfo : NSObject

@property (retain, nonatomic) NSData *binary;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSNumber *dylib;
@property (retain, nonatomic) NSMutableData *uscSamples;
@property (retain, nonatomic) DYShaderAnalyzerResult *analyzerResult;

- (id)init;
- (void).cxx_destruct;

@end
