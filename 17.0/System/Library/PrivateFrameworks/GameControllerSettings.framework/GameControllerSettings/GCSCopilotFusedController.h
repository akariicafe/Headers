@class NSString, NSDate;
@protocol GCSJSONObject;

@interface GCSCopilotFusedController : NSObject <NSSecureCoding, GCSJSONSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<GCSJSONObject> jsonObject;
@property (readonly, nonatomic) NSDate *modifiedDate;
@property (readonly, copy, nonatomic) NSString *fusedControllerIdentifier;
@property (readonly, copy, nonatomic) NSString *pilotIdentifier;
@property (readonly, copy, nonatomic) NSString *copilotIdentifier;

+ (id)archivalClasses;

- (id)initWithJSONObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFusedControllerIdentifier:(id)a0 pilotIdentifier:(id)a1 copilotIdentifier:(id)a2;

@end
