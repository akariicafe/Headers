@class NSSet, NSString;

@interface WFDisclosureWarning : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSSet *allDisclosureWarningClasses;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedMessage;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
