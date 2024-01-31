@interface PGSharingSuggestionOptions : NSObject

@property (nonatomic) unsigned long long sharingStream;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) BOOL includeUnverified;
@property (nonatomic) BOOL replaceMergeCandidates;
@property (nonatomic) BOOL debugMode;
@property (nonatomic) BOOL filterLowWeightResults;
@property (nonatomic) BOOL useContactSuggestion;

+ (unsigned long long)_shareSheetSharingStream;
+ (id)optionsForClient:(unsigned long long)a0;

- (id)init;
- (id)description;

@end
