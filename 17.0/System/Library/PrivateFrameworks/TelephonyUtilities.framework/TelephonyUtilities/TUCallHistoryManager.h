@protocol TUCallHistoryManagerDataSource;

@interface TUCallHistoryManager : NSObject

@property (readonly, nonatomic) id<TUCallHistoryManagerDataSource> dataSource;

- (id)init;
- (void)dealloc;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)updateOutgoingLocalParticipantUUID:(id)a0 forCallsWithOutgoingLocalParticipantUUID:(id)a1;
- (void)reportRecentCallForConversation:(id)a0 withStartDate:(id)a1;
- (void)updateOutgoingLocalParticipantUUID:(id)a0 forCallsWithLocalParticipantUUID:(id)a1;

@end
