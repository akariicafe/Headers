@class NSObject, NSMapTable, NSMutableSet;
@protocol SUUIMediaQueryDelegate, OS_dispatch_source;

@interface SUUIMediaQueryEvaluator : NSObject {
    NSMapTable *_cachedFeatureResults;
    NSMutableSet *_observedNotificationNames;
    NSObject<OS_dispatch_source> *_reloadTimer;
}

@property (weak, nonatomic) id<SUUIMediaQueryDelegate> delegate;

+ (void)initialize;
+ (void)registerFeatureClass:(Class)a0;

- (id)init;
- (void)dealloc;
- (void)reloadData;
- (void).cxx_destruct;
- (id)_delegateValuesForKeys:(id)a0;
- (void)_featureDidChangeNotification:(id)a0;
- (BOOL)evaluateMediaQuery:(id)a0;

@end
