@class NSString;

@interface SNTestFailure : NSObject

@property (readonly, copy, nonatomic) NSString *message;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (id)initWithMissingClass:(Class)a0;

@end
