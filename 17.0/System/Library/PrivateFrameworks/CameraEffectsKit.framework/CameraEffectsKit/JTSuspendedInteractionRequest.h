@class NSString, NSArray;

@interface JTSuspendedInteractionRequest : NSObject

@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSArray *excludedChildViewControllers;

+ (id)requestWithTag:(id)a0 excludedViewControllers:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
