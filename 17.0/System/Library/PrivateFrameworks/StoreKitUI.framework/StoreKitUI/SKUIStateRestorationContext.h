@class SKUIClientContext;

@interface SKUIStateRestorationContext : NSObject

@property (retain, nonatomic) SKUIClientContext *clientContext;

+ (id)sharedContext;
+ (void)setSharedContext:(id)a0;

- (void).cxx_destruct;

@end
