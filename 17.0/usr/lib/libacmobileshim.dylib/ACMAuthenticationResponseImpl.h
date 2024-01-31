@class NSString, NSDictionary, NSError;

@interface ACMAuthenticationResponseImpl : ACMMessage <ACMAuthenticationResponse>

@property (retain) NSString *token;
@property (retain) NSString *userName;
@property (retain) NSDictionary *rawResponseData;
@property (retain) NSError *error;
@property BOOL generatedWithTouchID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authenticationResponse;


@end
