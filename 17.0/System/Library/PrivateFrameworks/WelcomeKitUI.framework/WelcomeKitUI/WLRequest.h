@protocol WLRequestDelegate;

@interface WLRequest : NSObject

@property (weak, nonatomic) id<WLRequestDelegate> delegate;

- (void).cxx_destruct;
- (void)request:(id)a0 redirect:(BOOL)a1;
- (void)sessionDidFinish:(id)a0 response:(id)a1 error:(id)a2 redirect:(BOOL)a3;

@end
