@interface ASTNetworkReachability : NSObject

+ (id)defaultPath;
+ (BOOL)hasExpensiveCellOnlyNetworkConnection;
+ (BOOL)hasNetworkConnection;

@end
