@class NSString;

@interface SAMLNameId : SAMLBaseElement

@property (readonly, nonatomic) NSString *nameQualifier;
@property (readonly, nonatomic) NSString *spNameQualifier;
@property (readonly, nonatomic) NSString *format;
@property (readonly, nonatomic) NSString *spProvidedId;

+ (id)createElement:(id *)a0;

@end
