@class NSError;

@interface SSPromiseResult : NSObject

@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) id result;

- (id)initWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
