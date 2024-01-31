@class NSString;

@interface ADArgumentParser : ADArgumentParserCommand {
    NSString *_programDescription;
}

- (BOOL)parse;
- (void).cxx_destruct;
- (BOOL)parseArguments:(id)a0;
- (void)addProgramDescription:(id)a0;
- (BOOL)parseStringCommand:(id)a0;

@end
