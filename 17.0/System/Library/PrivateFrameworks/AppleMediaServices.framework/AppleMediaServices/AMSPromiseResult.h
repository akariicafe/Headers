@class NSError;

@interface AMSPromiseResult : NSObject

@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) id result;

- (id)initWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
