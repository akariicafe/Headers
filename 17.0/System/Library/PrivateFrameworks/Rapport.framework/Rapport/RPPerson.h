@class NSString, NSMutableDictionary, CURangingMeasurement, NSArray;

@interface RPPerson : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *deviceDict;
@property (copy, nonatomic) NSString *identifier;
@property (retain) CURangingMeasurement *relativeLocation;
@property (readonly, nonatomic) int activityLevel;
@property (readonly, copy, nonatomic) NSString *contactID;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int proximity;

- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned int)removeRPDevice:(id)a0;
- (unsigned int)_updateDeviceDerivedInfo;
- (unsigned int)updateWithRPDevice:(id)a0;

@end
