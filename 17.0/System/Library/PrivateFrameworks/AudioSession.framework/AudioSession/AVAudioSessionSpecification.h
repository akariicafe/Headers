@class NSString;

@interface AVAudioSessionSpecification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sessionType;
@property (nonatomic) struct { unsigned int val[8]; } clientAuditToken;
@property (nonatomic) unsigned int sourceSessionID;
@property (copy, nonatomic) NSString *clientIdentifier;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
