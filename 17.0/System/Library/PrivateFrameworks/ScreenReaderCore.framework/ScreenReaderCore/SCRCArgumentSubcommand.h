@class NSArray, NSMutableArray, NSString;

@interface SCRCArgumentSubcommand : NSObject

@property (retain, nonatomic) NSMutableArray *_optionMutableArray;
@property (readonly, copy, nonatomic) NSArray *optionArray;
@property (copy, nonatomic) NSString *subcommandName;

+ (id)subcommandWithName:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (int)run;
- (long long)compare:(id)a0;
- (void)stop;
- (id)initWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)showHelp;
- (void)addOption:(char)a0 argument:(id)a1 target:(id)a2 action:(SEL)a3 argumentDescription:(id)a4 required:(BOOL)a5;
- (id)formattedHelpFooter;
- (id)formattedHelpHeader;
- (void)stopDueToSigTerm;

@end
