@class DEMatchCriteria;

@interface DEFilter : NSObject

@property (retain, nonatomic) DEMatchCriteria *include;
@property (retain, nonatomic) DEMatchCriteria *exclude;

+ (id)catUpdates;
+ (id)catUpdates:(id)a0;
+ (id)deprecatedCatSummary;
+ (id)filterFromPb:(const void *)a0;
+ (id)filterThroughPb:(id)a0;
+ (void)filterToPb:(id)a0 filterPb:(void *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)allows:(id)a0;
- (BOOL)apply:(id /* block */)a0 to:(id)a1;
- (id)initWithInclude:(id)a0 exclude:(id)a1;

@end
