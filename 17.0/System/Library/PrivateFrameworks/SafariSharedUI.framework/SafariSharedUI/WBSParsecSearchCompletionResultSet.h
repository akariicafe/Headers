@class NSString, NSArray, NSMutableDictionary;

@interface WBSParsecSearchCompletionResultSet : NSObject {
    NSArray *_patternStrings;
    NSMutableDictionary *_patternStringsToPatterns;
}

@property (copy, nonatomic) NSString *status;
@property (readonly, nonatomic) NSString *errorCodeString;
@property (readonly, nonatomic) NSString *completionString;
@property (readonly, nonatomic) NSString *prefix;
@property (readonly, nonatomic) NSString *feedbackQueryIdentifier;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) double maxAge;
@property (readonly, nonatomic) double completionScore;

+ (id)resultSetSchemaWithCache:(id)a0;
+ (id)resultSetWithDictionary:(id)a0 cache:(id)a1;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)a0 cache:(id)a1;
- (void)enumeratePatternsUsingBlock:(id /* block */)a0;

@end
