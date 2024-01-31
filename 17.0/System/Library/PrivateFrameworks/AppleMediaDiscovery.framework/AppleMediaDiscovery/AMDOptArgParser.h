@class NSMutableDictionary;

@interface AMDOptArgParser : NSObject

@property (retain, nonatomic) NSMutableDictionary *options;
@property (retain, nonatomic) NSMutableDictionary *parsedOptArgs;
@property (retain, nonatomic) NSMutableDictionary *shortOptions;

- (void).cxx_destruct;
- (void)showHelp;
- (id)getValueForOption:(id)a0;
- (id)initWithOptArgs:(id)a0;
- (id)parseArgs:(id)a0;

@end
