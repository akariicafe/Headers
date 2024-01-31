@class NSString, NSIndexPath;

@interface _MCDStackItem : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSIndexPath *indexPath;

+ (id)stackItemWithContainer:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
