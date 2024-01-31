@class NSDictionary, PHFetchResult;

@interface PXPhotoKitPeopleSuggestionsDataSourceState : NSObject <NSCopying>

@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly, nonatomic) NSDictionary *personSuggestionsByPerson;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPeople:(id)a0 personSuggestionsByPerson:(id)a1;
- (id)stateUpdatedWithChange:(id)a0 changeDetails:(id *)a1;

@end
