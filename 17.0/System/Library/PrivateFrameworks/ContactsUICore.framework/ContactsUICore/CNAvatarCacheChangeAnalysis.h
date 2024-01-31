@class NSData, NSArray;

@interface CNAvatarCacheChangeAnalysis : NSObject

@property (readonly, copy, nonatomic) NSData *currentChangeHistoryToken;
@property (readonly, copy, nonatomic) NSArray *identifiersOfAffectedContacts;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCurrentChangeHistoryToken:(id)a0 identifiersOfAffectedContacts:(id)a1;

@end
