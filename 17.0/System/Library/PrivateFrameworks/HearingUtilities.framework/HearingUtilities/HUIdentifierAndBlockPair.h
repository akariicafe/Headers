@interface HUIdentifierAndBlockPair : NSObject

@property (nonatomic) id identifier;
@property (copy, nonatomic) id block;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 andBlock:(id)a1;

@end
