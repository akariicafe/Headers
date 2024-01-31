@class NSMutableDictionary;

@interface FrameworkCache : NSObject {
    NSMutableDictionary *_selectorValueDict;
}

+ (unsigned char)getCachePolicyForSelector:(SEL)a0;
+ (SEL)getCacheableSelectorForNotification:(id)a0;

- (void)handleDisconnection;
- (id)init;
- (void).cxx_destruct;
- (id)valueForSelector:(SEL)a0;
- (void)handleValue:(id)a0 forSelector:(SEL)a1;
- (void)handleNotification:(id)a0;

@end
