@class NSMutableDictionary, NSMutableSet;

@interface FMObservingCell : UITableViewCell

@property (retain, nonatomic) NSMutableDictionary *kvoObservationTokens;
@property (retain, nonatomic) NSMutableSet *notificationTokens;
@property (weak, nonatomic) id representedObject;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)addKVOObservationToken:(id)a0 forObject:(id)a1;
- (void)addNotificationToken:(id)a0;
- (void)addObserversForRepresentedObject:(id)a0;
- (void)removeKVOObservationTokens;
- (void)removeNotificationTokens;

@end
