@class NSString, NSArray;

@interface ECHeaderAuthenticationResultStatement : NSObject {
    unsigned long long _hash;
}

@property (readonly, copy, nonatomic) NSString *method;
@property (readonly, copy, nonatomic) NSString *result;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSArray *properties;

- (void).cxx_destruct;
- (id)_valueForPropertyPassingTest:(id /* block */)a0;
- (id)initWithMethod:(id)a0 result:(id)a1 reason:(id)a2 properties:(id)a3;
- (id)valueForFullProperty:(id)a0;
- (id)valueForPropertyType:(id)a0 property:(id)a1;

@end
