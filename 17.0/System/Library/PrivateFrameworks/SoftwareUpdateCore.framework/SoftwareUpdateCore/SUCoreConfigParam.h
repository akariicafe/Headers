@class NSError, MAAsset;

@interface SUCoreConfigParam : NSObject

@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, retain, nonatomic) MAAsset *locatedAsset;
@property (readonly, nonatomic) unsigned long long operation;

- (id)description;
- (void).cxx_destruct;
- (id)initWithError:(id)a0 operation:(unsigned long long)a1;
- (id)initWithLocatedAsset:(id)a0;

@end
