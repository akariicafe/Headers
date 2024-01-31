@class NSString;

@interface TSKSearch : NSObject

@property (copy, nonatomic) NSString *string;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) id /* block */ hitBlock;
@property (nonatomic) BOOL isComplete;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 options:(unsigned long long)a1 hitBlock:(id /* block */)a2;

@end
