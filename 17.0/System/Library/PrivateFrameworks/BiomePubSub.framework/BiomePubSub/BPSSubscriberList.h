@class NSMutableArray;

@interface BPSSubscriberList : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *tickets;
@property (nonatomic) long long nextTicket;

- (id)init;
- (id)claimAll;
- (long long)appendElement:(id)a0;
- (void).cxx_destruct;
- (void)removeTicket:(long long)a0;

@end
