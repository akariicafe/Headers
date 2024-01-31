@class NSString;

@interface DATransaction : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *transactionId;

- (id)init;
- (void)dealloc;
- (id)initWithLabel:(id)a0;
- (void).cxx_destruct;

@end
