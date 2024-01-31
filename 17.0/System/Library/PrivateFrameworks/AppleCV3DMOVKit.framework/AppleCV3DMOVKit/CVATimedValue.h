@class NSObject;
@protocol NSSecureCoding;

@interface CVATimedValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) unsigned long long frameId;
@property (retain, nonatomic) NSObject<NSSecureCoding> *value;

+ (id)classes;

- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
