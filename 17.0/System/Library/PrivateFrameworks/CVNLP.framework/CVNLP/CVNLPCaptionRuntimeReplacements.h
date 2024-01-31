@class NSString, NSNumber;

@interface CVNLPCaptionRuntimeReplacements : NSObject

@property (readonly, nonatomic) NSString *replacementKey;
@property (readonly, nonatomic) NSString *replacementValue;
@property (readonly, nonatomic) double replacementProb;
@property (readonly, nonatomic) NSNumber *genderOption;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1 prob:(double)a2 genderOption:(id)a3;

@end
