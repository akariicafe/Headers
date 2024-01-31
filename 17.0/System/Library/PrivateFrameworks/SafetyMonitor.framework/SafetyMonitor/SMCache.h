@class NSSet, NSUUID, SMDeviceStatus, NSData, GEOLocationShifter, SMLocation;

@interface SMCache : NSObject <NSSecureCoding> {
    GEOLocationShifter *_shifter;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SMDeviceStatus *deviceStatus;
@property (retain, nonatomic) NSSet *locationsDuringSession;
@property (retain, nonatomic) SMLocation *unlockLocation;
@property (retain, nonatomic) SMLocation *lockLocation;
@property (retain, nonatomic) SMLocation *mostRecentLocation;
@property (retain, nonatomic) SMLocation *startingLocation;
@property (retain, nonatomic) SMLocation *offWristLocation;
@property (retain, nonatomic) SMLocation *parkedCarLocation;
@property (retain, nonatomic) NSData *destinationMapItem;
@property (readonly, copy, nonatomic) NSUUID *identifier;

+ (void)logNoCacheDataForSessionID:(id)a0 role:(id)a1 deviceType:(id)a2 transaction:(id)a3;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)identifierHash;
- (id)outputToDictionary;
- (id)initWithIdentifier:(id)a0 deviceStatus:(id)a1 locationsDuringSession:(id)a2 unlockLocation:(id)a3 lockLocation:(id)a4 mostRecentLocation:(id)a5 startingLocation:(id)a6 offWristLocation:(id)a7 parkedCarLocation:(id)a8 destinationMapItem:(id)a9;
- (void)logCacheForSessionID:(id)a0 role:(id)a1 deviceType:(id)a2 transaction:(id)a3 hashString:(id)a4;
- (void)shiftLocation:(id)a0 queue:(id)a1 withHandler:(id /* block */)a2;
- (void)shiftLocationsOnQueue:(id)a0 handler:(id /* block */)a1;
- (BOOL)shiftRequiredForLocation:(id)a0;

@end
