@class NSString;

@interface SKStateTransitionEntry : NSObject

@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *event;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) NSString *nextState;

+ (id)entryWithState:(id)a0 event:(id)a1;
+ (id)entryWithState:(id)a0 event:(id)a1 action:(id /* block */)a2;
+ (id)entryWithState:(id)a0 event:(id)a1 action:(id /* block */)a2 nextState:(id)a3;
+ (id)entryWithState:(id)a0 event:(id)a1 selector:(SEL)a2;
+ (id)entryWithState:(id)a0 event:(id)a1 selector:(SEL)a2 nextState:(id)a3;

- (void).cxx_destruct;

@end
