@class NSError;

@interface ASDPromiseResult : NSObject

@property (readonly) NSError *error;
@property (readonly) id value;

+ (id)resultWithError:(id)a0;
+ (id)resultWithValue:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
