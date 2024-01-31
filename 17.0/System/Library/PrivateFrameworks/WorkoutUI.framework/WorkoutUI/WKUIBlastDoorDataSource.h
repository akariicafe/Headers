@class NSString;

@interface WKUIBlastDoorDataSource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) BOOL isIndoor;
@property (readonly, nonatomic) long long configurationType;
@property (readonly, nonatomic) NSString *configurationName;
@property (readonly, nonatomic) unsigned long long goalTypeIdentifier;

+ (id)dataFromSourceFromData:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithActivityType:(unsigned long long)a0 isIndoor:(BOOL)a1 configurationType:(long long)a2 configurationName:(id)a3 goalTypeIdentifier:(unsigned long long)a4;

@end
