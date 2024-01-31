@interface CTUIDataUsageSorting : NSObject

+ (id /* block */)usageComparator;
+ (id /* block */)alphabeticalComparator;
+ (id /* block */)userSelectedComparator;

@end
