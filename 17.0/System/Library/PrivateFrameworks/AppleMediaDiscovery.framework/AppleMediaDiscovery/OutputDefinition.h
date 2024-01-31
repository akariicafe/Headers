@class NSString, NSNumber, NSArray;

@interface OutputDefinition : NSObject

@property (retain, nonatomic) NSString *modelOutputName;
@property (retain, nonatomic) NSString *mode;
@property (retain, nonatomic) NSNumber *modelTopN;
@property (retain, nonatomic) NSArray *modifiers;
@property (retain, nonatomic) NSString *remapDictionaryId;
@property (retain, nonatomic) NSNumber *scoreThresholdAsMultipleOfRandomScore;

- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithOutputDefinitionDictionary:(id)a0;

@end
