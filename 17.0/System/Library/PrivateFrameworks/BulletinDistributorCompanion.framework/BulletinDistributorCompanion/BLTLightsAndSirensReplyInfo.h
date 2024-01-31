@class NSString, NSDate;

@interface BLTLightsAndSirensReplyInfo : NSObject

@property (readonly, nonatomic) BOOL replySent;
@property (copy, nonatomic) id /* block */ reply;
@property (nonatomic) unsigned long long didPlayLightsAndSirens;
@property (retain, nonatomic) NSDate *bulletinPublicationDate;
@property (nonatomic) BOOL didLogAggd;
@property (readonly, nonatomic) NSDate *creation;
@property (copy, nonatomic) NSString *publisherMatchID;
@property (copy, nonatomic) NSString *sectionID;

- (id)init;
- (void).cxx_destruct;
- (BOOL)sendReply;
- (BOOL)hasExpired;

@end
