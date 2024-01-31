@class NSString;

@interface SBSpuriousScreenUndimmingAssertion : NSObject {
    NSString *_identifier;
}

+ (BOOL)isAnyActive;
+ (id)debugDescription;
+ (void)_accessListWithBlock:(id /* block */)a0;

- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (id)description;
- (void).cxx_destruct;

@end
