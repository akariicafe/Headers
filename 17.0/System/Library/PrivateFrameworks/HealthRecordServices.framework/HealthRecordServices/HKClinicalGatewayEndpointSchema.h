@class NSString, NSDictionary, NSArray;

@interface HKClinicalGatewayEndpointSchema : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *auth;
@property (readonly, copy, nonatomic) NSDictionary *body;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, copy, nonatomic) NSArray *form;
@property (readonly, copy, nonatomic) NSArray *headers;
@property (readonly, copy, nonatomic) NSString *method;
@property (readonly, nonatomic) long long minCompatibleAPIVersion;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *query;
@property (readonly, copy, nonatomic) NSString *URL;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAuth:(id)a0 body:(id)a1 enabled:(BOOL)a2 form:(id)a3 headers:(id)a4 method:(id)a5 minCompatibleAPIVersion:(long long)a6 name:(id)a7 query:(id)a8 URL:(id)a9;

@end
