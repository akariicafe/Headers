@class NSString;

@interface FIValidation : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id /* block */ test;

+ (BOOL)performValidations:(id)a0 withObject:(id)a1 error:(id *)a2;
+ (id)validationWithName:(id)a0 test:(id /* block */)a1;

- (void).cxx_destruct;
- (BOOL)validateObject:(id)a0 withError:(id *)a1;

@end
