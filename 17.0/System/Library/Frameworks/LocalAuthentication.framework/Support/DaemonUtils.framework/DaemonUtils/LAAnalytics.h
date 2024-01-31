@class NSString, NSMutableArray;

@interface LAAnalytics : NSObject

@property (weak, nonatomic) NSMutableArray *storage;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL wasSent;

- (id)initWithEventName:(id)a0;
- (void).cxx_destruct;
- (void)collectIfNeeded;
- (void)_collect;
- (id)buildPayload;
- (id)instanceToReplaceWithWhenRemovedFromStorage;
- (void)persistInStorage:(id)a0;
- (void)removeFromStorage;
- (BOOL)shouldCollect;

@end
