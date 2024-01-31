@class NSString;

@interface PLSearchSuggestion : NSObject

@property (readonly, nonatomic) NSString *contentString;
@property (readonly, nonatomic) unsigned long long indexCategory;
@property (readonly, nonatomic) unsigned long long userCategory;
@property (readonly, nonatomic) unsigned long long suggestionType;
@property (readonly, nonatomic) unsigned long long matchedAssetsCount;
@property (readonly, nonatomic) unsigned long long matchedCollectionsCount;
@property (readonly, nonatomic) unsigned long long psiGroupId;
@property (readonly, nonatomic) unsigned long long psiOwningGroupId;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } matchRangeOfSearchText;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithContentString:(id)a0 groupId:(unsigned long long)a1 owningGroupId:(unsigned long long)a2 matchedAssetsCount:(unsigned long long)a3 matchedCollectionsCount:(unsigned long long)a4 indexCategory:(unsigned long long)a5 suggestionType:(unsigned long long)a6 matchRangeOfSearchText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a7;

@end
