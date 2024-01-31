@class NSString;

@interface VIACacheHitContext : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long queryID;
@property (readonly, nonatomic) unsigned long long cachedResultQueryID;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) NSString *engagementSuggestionType;

+ (id)contextWithDictionary:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQueryID:(unsigned long long)a0 cachedResultQueryID:(unsigned long long)a1 applicationIdentifier:(id)a2 engagementSuggestionType:(id)a3;

@end
