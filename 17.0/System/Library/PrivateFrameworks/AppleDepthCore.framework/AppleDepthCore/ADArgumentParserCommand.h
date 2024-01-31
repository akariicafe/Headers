@class NSString, NSMutableArray;
@protocol ADArgumentParserCommandHandler;

@interface ADArgumentParserCommand : NSObject {
    NSString *_programName;
    NSString *_preParsedPrefix;
    NSMutableArray *_positionalArguments;
    NSMutableArray *_optionalArguments;
    NSMutableArray *_subCommands;
}

@property (retain, nonatomic) id<ADArgumentParserCommandHandler> handler;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *descriptionString;

- (id)init;
- (id)usage;
- (void).cxx_destruct;
- (void)addDescription:(id)a0;
- (void)addOptionalArgument:(id)a0;
- (void)addPositionalArgument:(id)a0;
- (void)addSubCommand:(id)a0 withName:(SEL)a1 description:(id)a2;
- (void)addSubCommand:(id)a0 withName:(id)a1 description:(id)a2 handler:(id)a3;
- (BOOL)checkIfName:(id)a0 notInList:(id)a1;
- (BOOL)commandParse:(id)a0 commandIndex:(unsigned int)a1;
- (id)fullUsageWithPrefix:(id)a0;
- (BOOL)parseSubCommand:(id)a0 commandIndex:(unsigned int)a1;
- (BOOL)parseUsingDocopt:(id)a0;
- (id)shortUsageWithPrefix:(id)a0;
- (id)subCommandsUsageWithPrefix:(id)a0;
- (BOOL)verifyArgumentsForClass;
- (BOOL)verifyCommandStructure;
- (BOOL)verifyInputs;
- (BOOL)verifyNoArgumentDuplications;
- (BOOL)verifySingleArgName:(id)a0 ofType:(unsigned long long)a1;

@end
