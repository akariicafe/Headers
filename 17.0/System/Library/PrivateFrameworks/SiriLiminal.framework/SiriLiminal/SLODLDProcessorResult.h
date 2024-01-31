@class NSString, NSArray, NSData, NSDictionary;

@interface SLODLDProcessorResult : NSObject

@property (readonly, nonatomic) float odldScore;
@property (readonly, nonatomic) NSData *outputEmb;
@property (readonly, nonatomic) float outputAnchor;
@property (readonly, nonatomic) NSString *configVersion;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) NSDictionary *features;

- (id)description;
- (void).cxx_destruct;
- (id)initWithScore:(float)a0 withVersion:(id)a1 tokens:(id)a2 features:(id)a3 outputEmb:(id)a4 outputAnchor:(float)a5;

@end
