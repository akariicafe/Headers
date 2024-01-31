@class NSMutableDictionary;

@interface _UICalendarViewDecorationSystem : NSObject

@property (retain, nonatomic) NSMutableDictionary *decorationViewFeed;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (void)_prepareDecorationFeedForKey:(id)a0;
- (void)configureDecoration:(id)a0;
- (void)invalidateDecoration:(id)a0;

@end
