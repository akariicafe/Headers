@class NSObject;
@protocol OS_xpc_object;

@interface TRIDownloadOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, nonatomic) unsigned long long requiredCapability;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsBatteryUsage;
@property (nonatomic) unsigned long long discretionaryBehavior;

+ (id)inexpensiveOptions;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAllowsCellular:(BOOL)a0 discretionaryBehavior:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAllowsCellular:(BOOL)a0 discretionaryBehavior:(unsigned long long)a1 activity:(id)a2;
- (id)initFromPersistedBehavior:(id)a0;
- (id)serializeToPersistedBehavior;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
