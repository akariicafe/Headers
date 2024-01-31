@class NSString;

@interface SAMLStatusCode : SAMLBaseElement

@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) SAMLStatusCode *statusCode;

+ (id)createElement:(id *)a0;

@end
