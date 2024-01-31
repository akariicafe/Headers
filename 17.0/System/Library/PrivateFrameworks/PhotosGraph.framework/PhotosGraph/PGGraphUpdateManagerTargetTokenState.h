@class PHPersistentChangeToken;

@interface PGGraphUpdateManagerTargetTokenState : NSObject

@property (readonly, nonatomic) PHPersistentChangeToken *changeToken;
@property (nonatomic) BOOL encounteredTargetToken;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPersistentChangeToken:(id)a0;

@end
