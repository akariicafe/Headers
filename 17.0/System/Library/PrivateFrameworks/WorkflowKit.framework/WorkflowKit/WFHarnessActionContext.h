@class NSString;

@interface WFHarnessActionContext : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long indexInWorkflow;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 indexInWorkflow:(unsigned long long)a1;

@end
