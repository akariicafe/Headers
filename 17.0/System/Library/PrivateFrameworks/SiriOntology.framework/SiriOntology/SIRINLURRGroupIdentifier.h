@class NSString;

@interface SIRINLURRGroupIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *groupId;
@property int seq;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupId:(id)a0 seq:(int)a1;

@end
