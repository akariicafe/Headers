@class NSDictionary, NSData, HMFActivity;

@interface HMFHTTPResponseInternal : HMFObject <NSCopying>

@property (readonly, nonatomic) long long statusCode;
@property (copy, nonatomic) NSDictionary *headerFields;
@property (copy, nonatomic) NSData *body;
@property (retain, nonatomic) HMFActivity *activity;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStatusCode:(long long)a0 headerFields:(id)a1 body:(id)a2;
- (void)setHeaderValue:(id)a0 forHeaderKey:(id)a1;

@end
