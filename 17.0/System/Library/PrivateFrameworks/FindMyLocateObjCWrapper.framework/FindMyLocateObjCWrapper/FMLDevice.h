@class NSString;

@interface FMLDevice : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *idsDeviceId;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isThisDevice;
@property (nonatomic) BOOL isCompanion;
@property (nonatomic) BOOL isAutoMeCapable;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)comparisonIdentifier;
- (id)initWithIdentifier:(id)a0 deviceName:(id)a1 idsDeviceId:(id)a2 isActive:(BOOL)a3 isThisDevice:(BOOL)a4 isCompanion:(BOOL)a5 isAutoMeCapable:(BOOL)a6;

@end
