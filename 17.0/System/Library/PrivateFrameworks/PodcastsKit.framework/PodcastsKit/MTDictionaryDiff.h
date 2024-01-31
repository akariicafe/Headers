@class NSDictionary, NSMutableArray, NSSet;

@interface MTDictionaryDiff : NSObject

@property (retain, nonatomic) NSMutableArray *callbacks;
@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSSet *properties;

- (id)init;
- (void).cxx_destruct;
- (void)addCallback:(id /* block */)a0;
- (id)initWithProperties:(id)a0;

@end
