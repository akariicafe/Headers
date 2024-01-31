@class NSString;

@interface SOKerberosCredential : NSObject

@property (retain) NSString *name;
@property unsigned int lifetime;
@property (retain) NSString *uuid;

- (id)init;
- (void).cxx_destruct;

@end
