@class NSString;

@interface SSTermsAndConditions : NSObject <NSCopying>

@property (nonatomic, getter=isUserAccepted) BOOL userAccepted;
@property (nonatomic) NSString *currentText;
@property (nonatomic) long long currentVersionIdentifier;
@property (readonly, nonatomic) BOOL requiresAuthentication;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResponseData:(id)a0 error:(id *)a1;

@end
