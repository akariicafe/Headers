@class NSDictionary, NSSet, NSError;

@interface TPSTipKitContentManager : NSObject

+ (void)updateContentWithMeta:(NSDictionary *)a0 documents:(NSDictionary *)a1 clientConditions:(NSSet *)a2 completionHandler:(void (^)(BOOL, NSError *))a3;

- (id)init;

@end
