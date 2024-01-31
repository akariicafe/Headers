@class NSString, NSArray;

@interface MusicKit_SoftLinking_MPModelLibrarySearchRequest : MusicKit_SoftLinking_MPModelRequest

@property (copy, nonatomic) NSString *searchTerm;
@property (copy, nonatomic) NSArray *scopes;
@property (nonatomic) long long limit;

- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)initWithSearchTerm:(id)a0 scopes:(id)a1 limit:(long long)a2;

@end
