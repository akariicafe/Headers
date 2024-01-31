@interface AMSUniversalLinksUpdateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL success;

+ (id)archiveClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
