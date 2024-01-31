@class NSString;

@interface _UIAutologgingDeallocSentinel : NSObject

@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL called;

- (void)dealloc;
- (void).cxx_destruct;

@end
