@class NSString, NSOrderedSet, NSDate;

@interface SFHistoryViewDataSourceSession : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDate *lastVisitedDate;
@property (readonly, nonatomic) NSOrderedSet *historyItems;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)filteredSessionWithItems:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 lastVisitedDate:(id)a2 historyItems:(id)a3;

@end
