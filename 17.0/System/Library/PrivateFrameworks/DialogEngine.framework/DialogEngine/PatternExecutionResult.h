@class PatternVisualInfo, NSString, NSDictionary, NSArray, NSData, NSNumber;

@interface PatternExecutionResult : NSObject

@property (retain, nonatomic) NSString *patternId;
@property (retain, nonatomic) NSDictionary *meta;
@property (retain, nonatomic) NSArray *dialog;
@property (retain, nonatomic) NSData *visual;
@property (retain, nonatomic) NSString *responseMode;
@property (retain, nonatomic) NSNumber *printSupportingDialog;
@property (nonatomic) unsigned long long patternType;
@property (retain, nonatomic) PatternVisualInfo *visualInfo;

- (void).cxx_destruct;
- (void)append:(id)a0;
- (id)visualToJsonDictionary;
- (id)visualToString;

@end
