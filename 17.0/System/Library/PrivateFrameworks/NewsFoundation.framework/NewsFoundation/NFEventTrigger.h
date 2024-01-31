@class NSString, NSSet;

@interface NFEventTrigger : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSSet *events;
@property (readonly, nonatomic) id /* block */ block;
@property (readonly, nonatomic) BOOL fireOnce;
@property (readonly, nonatomic) BOOL fireOnAny;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 fireOnce:(BOOL)a1 fireOnAny:(BOOL)a2 events:(id)a3 block:(id /* block */)a4;

@end
