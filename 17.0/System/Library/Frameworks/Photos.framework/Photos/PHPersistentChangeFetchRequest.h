@class PHPersistentChangeToken;

@interface PHPersistentChangeFetchRequest : NSObject

@property (copy, nonatomic) PHPersistentChangeToken *token;
@property (nonatomic) unsigned long long maximumChangeThreshold;

- (void).cxx_destruct;

@end
