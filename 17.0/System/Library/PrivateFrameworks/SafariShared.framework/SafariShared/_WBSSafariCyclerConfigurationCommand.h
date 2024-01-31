@class NSString;

@interface _WBSSafariCyclerConfigurationCommand : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *help;
@property (copy, nonatomic) NSString *usage;
@property (nonatomic) unsigned long long minimumArgumentCount;
@property (nonatomic) unsigned long long maximumArgumentCount;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 help:(id)a1;
- (BOOL)invokeWithParameters:(id)a0;
- (void)setArgumentCount:(unsigned long long)a0;

@end
