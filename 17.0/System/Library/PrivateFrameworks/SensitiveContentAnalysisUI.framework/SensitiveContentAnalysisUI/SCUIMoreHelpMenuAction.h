@class NSString;

@interface SCUIMoreHelpMenuAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL destructive;
@property (nonatomic) long long actionID;

+ (id)action:(id)a0 destructive:(BOOL)a1 actionID:(long long)a2;

- (void).cxx_destruct;

@end
