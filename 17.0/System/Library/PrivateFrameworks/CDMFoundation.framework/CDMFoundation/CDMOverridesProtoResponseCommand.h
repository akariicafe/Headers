@class NSArray;

@interface CDMOverridesProtoResponseCommand : CDMBaseCommand

@property (retain, nonatomic) NSArray *parsesForReplacement;
@property (retain, nonatomic) NSArray *parsesForAppending;

- (void).cxx_destruct;
- (id)initWithParsesForReplacement:(id)a0 parsesForAppending:(id)a1;

@end
