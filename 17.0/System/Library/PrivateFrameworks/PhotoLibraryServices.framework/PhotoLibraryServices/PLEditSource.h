@class NUResolvedSource, NUSource;

@interface PLEditSource : NSObject

@property (readonly, nonatomic) NUResolvedSource *resolvedSource;
@property (readonly, retain, nonatomic) NUSource *source;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) BOOL isRAWSource;

- (void)setIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithResolvedSource:(id)a0 mediaType:(long long)a1;
- (void)setResolvedSource:(id)a0 mediaType:(long long)a1;

@end
