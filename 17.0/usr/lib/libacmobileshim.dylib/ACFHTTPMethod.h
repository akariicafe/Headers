@class NSString, NSDictionary, NSData;

@interface ACFHTTPMethod : NSObject

@property (retain) NSString *name;
@property (retain) NSDictionary *headerFields;
@property (retain) NSData *body;

+ (id)method;
+ (id)methodWithName:(id)a0 headerFields:(id)a1 body:(id)a2;
+ (id)methodWithName:(id)a0 headerFields:(id)a1 bodyPropertyList:(id)a2 error:(id *)a3;

- (id)init;
- (void)dealloc;
- (id)initWithName:(id)a0 headerFields:(id)a1 body:(id)a2;

@end
