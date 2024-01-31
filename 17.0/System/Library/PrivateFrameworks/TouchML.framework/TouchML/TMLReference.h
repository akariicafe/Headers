@class NSString;

@interface TMLReference : NSObject <TMLValue> {
    id _target;
    id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)referenceForTarget:(id)a0;
+ (id)referenceWithBlock:(id /* block */)a0;

- (unsigned long long)valueType;
- (void).cxx_destruct;
- (id)value;
- (id)initWithTarget:(id)a0 block:(id /* block */)a1;

@end
