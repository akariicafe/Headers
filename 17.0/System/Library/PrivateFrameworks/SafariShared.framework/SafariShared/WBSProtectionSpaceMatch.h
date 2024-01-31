@class NSDictionary, NSURLProtectionSpace, NSURLCredential;

@interface WBSProtectionSpaceMatch : NSObject

@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, copy, nonatomic) NSDictionary *credentials;
@property (readonly, nonatomic) NSURLCredential *defaultCredential;
@property (readonly, nonatomic) long long matchLevel;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithProtectionSpace:(id)a0 credentials:(id)a1 defaultCredential:(id)a2 matchLevel:(long long)a3;

@end
