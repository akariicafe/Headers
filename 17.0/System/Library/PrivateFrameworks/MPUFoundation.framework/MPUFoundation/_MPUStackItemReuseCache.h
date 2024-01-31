@interface _MPUStackItemReuseCache : NSObject

+ (id)dequeueReusableStackItemWithIdentifier:(id)a0;
+ (void)enqueueReusableStackItem:(id)a0 forReuseIdentifier:(id)a1;
+ (void)registerStackViewForReuseIdentifier:(id)a0;
+ (void)unregisterStackViewForReuseIdentifier:(id)a0;

@end
