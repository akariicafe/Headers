@class NSString, NSUUID;

@interface SFB389NFCPromptConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *userMessage;
@property (retain, nonatomic) NSUUID *baUUID;
@property (nonatomic) unsigned long long promptState;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
