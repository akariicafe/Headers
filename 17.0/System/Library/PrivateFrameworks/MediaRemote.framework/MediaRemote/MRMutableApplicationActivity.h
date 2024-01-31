@class NSString;

@interface MRMutableApplicationActivity : MRApplicationActivity <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *primaryApplicationDisplayID;
@property (copy, nonatomic) NSString *secondaryApplicationDisplayID;
@property (nonatomic) int status;

- (void)setPrimaryApplicationDisplayID:(id)a0;
- (void)setSecondaryApplicationDisplayID:(id)a0;
- (void)setStatus:(int)a0;

@end
