@class NSString, NSArray;

@interface CTGeofenceProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *dataSetName;
@property (retain, nonatomic) NSString *versionNumber;
@property (retain, nonatomic) NSArray *geofenceList;
@property (nonatomic) BOOL cellularDataPreferred;
@property (nonatomic) BOOL enableNRStandalone;
@property (nonatomic) long long NRStandaloneMode;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
