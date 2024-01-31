@class NSString, SUCoreActivityOptions;

@interface SUCorePersistedActivity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *activityName;
@property (retain, nonatomic) SUCoreActivityOptions *activityOptions;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init:(id)a0 options:(id)a1;

@end
