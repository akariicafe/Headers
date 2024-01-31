@class NSDictionary;

@interface CUMessageRequestEntry : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSDictionary *options;

- (void).cxx_destruct;

@end
