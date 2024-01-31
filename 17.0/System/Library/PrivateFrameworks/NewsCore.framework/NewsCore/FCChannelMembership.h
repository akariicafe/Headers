@class NSString, FCInterestToken, NTPBChannelMembershipRecord;

@interface FCChannelMembership : NSObject

@property (retain, nonatomic) NTPBChannelMembershipRecord *record;
@property (retain, nonatomic) FCInterestToken *interestToken;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) BOOL isAllowedToSeeDrafts;
@property (readonly, nonatomic) NSString *draftArticleListID;
@property (readonly, nonatomic) NSString *draftIssueListID;

- (unsigned long long)hash;
- (id)initWithRecord:(id)a0 interestToken:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
