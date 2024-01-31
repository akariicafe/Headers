@class NSString, ICSortableSearchableItem, NSManagedObjectID;

@interface ICSearchResultConfiguration : NSObject

@property (readonly, nonatomic) NSString *searchString;
@property (readonly, nonatomic) unsigned long long searchStringLength;
@property (readonly, nonatomic) unsigned long long searchSuggestionType;
@property (readonly, nonatomic) BOOL isTopHit;
@property (readonly, nonatomic) NSManagedObjectID *foundAttachmentObjectID;
@property (readonly, nonatomic) ICSortableSearchableItem *sortableSearchableItem;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSearchString:(id)a0 searchSuggestionType:(unsigned long long)a1 isTopHit:(BOOL)a2 foundAttachmentObjectID:(id)a3 sortableSearchableItem:(id)a4;

@end
