@class NSString, NSArray, NTPBArticleListRecord, FCInterestToken, FCArticleListEditorialMetadata, NSDate;

@interface FCArticleList : NSObject

@property (readonly, nonatomic) NTPBArticleListRecord *record;
@property (readonly, nonatomic) FCInterestToken *interestToken;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *articleIDs;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) FCArticleListEditorialMetadata *editorialMetadata;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;

- (id)initWithRecord:(id)a0 interestToken:(id)a1;
- (void).cxx_destruct;

@end
