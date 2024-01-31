@class NSString;

@interface _SBPowerAssertionContext : NSObject

@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) id /* block */ collectionBlock;

- (void).cxx_destruct;

@end
