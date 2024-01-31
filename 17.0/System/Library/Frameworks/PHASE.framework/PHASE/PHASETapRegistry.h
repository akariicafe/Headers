@class PHASEEngine, NSMutableSet;

@interface PHASETapRegistry : NSObject {
    PHASEEngine *_weakEngine;
    NSMutableSet *_descriptions;
}

+ (id)new;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (id)initWithEngine:(id)a0;
- (id)tapReceiverFormatForIdentifier:(id)a0;
- (BOOL)registerTapReceiverForDescription:(id)a0 block:(id /* block */)a1;
- (BOOL)registerTapReceiverWithIdentifier:(id)a0 block:(id /* block */)a1;
- (id)tapReceiverFormatForDescription:(id)a0;
- (void)unregisterTapReceiverForDescription:(id)a0;
- (void)unregisterTapReceiverWithIdentifier:(id)a0;

@end
