@class MPModelLibrarySearchScope;

@interface MusicKit_SoftLinking_MPModelLibrarySearchScope : NSObject {
    MPModelLibrarySearchScope *_underlyingSearchScope;
}

@property (readonly, nonatomic) long long modelObjectType;

+ (id)_topResultsRelationshipKeyForSpecificModelObjectType:(long long)a0;
+ (id)scopeForTopResultsWithSpecificModelObjectTypeScopes:(id)a0;

- (void).cxx_destruct;
- (id)_initWithUnderlyingSearchScope:(id)a0 modelObjectType:(long long)a1;
- (long long)_modelObjectType;
- (id)_underlyingSearchScope;
- (id)initWithModelObjectType:(long long)a0;

@end
