@class NSString;

@interface BMXPCConnectionCacheKey : NSObject

@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, nonatomic) NSString *useCase;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDomain:(unsigned long long)a0 useCase:(id)a1;

@end
