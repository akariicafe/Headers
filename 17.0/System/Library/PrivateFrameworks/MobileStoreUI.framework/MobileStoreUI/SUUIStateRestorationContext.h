@class SUUIClientContext;

@interface SUUIStateRestorationContext : NSObject

@property (retain, nonatomic) SUUIClientContext *clientContext;

+ (id)sharedContext;
+ (void)setSharedContext:(id)a0;

- (void).cxx_destruct;

@end
