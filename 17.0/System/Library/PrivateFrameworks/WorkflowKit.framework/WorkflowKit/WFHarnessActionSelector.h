@class NSPredicate;

@interface WFHarnessActionSelector : NSObject

@property (class, readonly, nonatomic) WFHarnessActionSelector *matchAll;

@property (readonly, nonatomic) NSPredicate *predicate;

- (id)initWithPredicate:(id)a0;
- (void).cxx_destruct;
- (BOOL)matchesContext:(id)a0;

@end
