@class NSArray;

@interface CLIArguments : NSObject

@property (retain, nonatomic) NSArray *arguments;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)consumeUpToIndex:(long long)a0;
- (void).cxx_destruct;

@end
