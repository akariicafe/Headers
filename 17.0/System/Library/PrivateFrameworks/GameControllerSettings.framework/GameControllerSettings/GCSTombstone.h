@class NSString, NSDate;
@protocol GCSJSONObject;

@interface GCSTombstone : NSObject <NSSecureCoding, GCSJSONSerializable>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) double timeToLiveSeconds;

@property (readonly, nonatomic) id<GCSJSONObject> jsonObject;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) long long recordType;

+ (id)archivalClasses;

- (id)initWithJSONObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 creationDate:(id)a1 recordType:(long long)a2;

@end
