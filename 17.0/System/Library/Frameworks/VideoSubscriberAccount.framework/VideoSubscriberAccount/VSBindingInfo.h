@class NSString, NSValueTransformer, NSDictionary;

@interface VSBindingInfo : NSObject

@property (retain, nonatomic) NSValueTransformer *valueTransformer;
@property (readonly, nonatomic) id unsafeObservedObject;
@property (readonly, weak, nonatomic) id weakObservedObject;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (retain, nonatomic) id value;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObservedObject:(id)a0 keyPath:(id)a1 options:(id)a2;
- (void)requireExpectedConcurrency;

@end
