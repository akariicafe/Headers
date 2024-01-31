@class PHFace, PXPeopleSuggestionManager, NSString, PXPeopleNameSelection;
@protocol PXPerson, PXPeopleSuggestionManagerDataSource, PXPersonSuggestion;

@interface PXPeopleBootstrapContext : NSObject

@property (retain, nonatomic) id<PXPersonSuggestion> personSuggestion;
@property (copy, nonatomic) id /* block */ delayedPersonBlock;
@property (retain, nonatomic) PHFace *face;
@property (retain) id<PXPerson> sourcePerson;
@property (retain) id<PXPerson> targetPerson;
@property unsigned long long bootstrapType;
@property (retain) PXPeopleNameSelection *nameSelection;
@property (retain) PXPeopleSuggestionManager *suggestionManager;
@property (nonatomic) BOOL skipInitialAction;
@property (copy, nonatomic) id /* block */ onInitBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (nonatomic) BOOL wantsNaming;
@property (nonatomic) BOOL wantsMergeCandidateSuggestions;
@property (nonatomic) BOOL wantsPostNaming;
@property (nonatomic) BOOL wantsToBeAddedToPeopleAlbum;
@property (retain, nonatomic) id<PXPeopleSuggestionManagerDataSource> prefetchedDataSource;
@property (retain, nonatomic) NSString *callerInfo;
@property (readonly, nonatomic) NSString *localizedName;
@property (nonatomic) double backingScaleFactor;
@property (nonatomic) BOOL didCommitPreBootstrapAction;

+ (id)contextWithFace:(id)a0 type:(unsigned long long)a1 delayedPersonBlock:(id /* block */)a2;
+ (id)contextWithPerson:(id)a0 type:(unsigned long long)a1;
+ (id)contextWithPersonSuggestion:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
