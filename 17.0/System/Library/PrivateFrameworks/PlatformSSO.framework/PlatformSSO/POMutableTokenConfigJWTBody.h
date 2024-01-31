@class NSString, NSDictionary;

@interface POMutableTokenConfigJWTBody : POTokenConfigJWTBody <POMutableJWTBody>

@property (retain) NSString *userName;
@property (retain) NSString *loginUserName;
@property (readonly) NSDictionary *allData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUserName:(id)a0;
- (void)addCustomClaims:(id)a0;
- (void)setLoginUserName:(id)a0;

@end
