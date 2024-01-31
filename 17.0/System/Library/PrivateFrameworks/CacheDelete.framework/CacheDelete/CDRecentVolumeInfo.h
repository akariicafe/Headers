@class NSString, NSMutableDictionary, NSDictionary, NSDate, NSNumber, CacheDeleteVolume;

@interface CDRecentVolumeInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *volume;
@property (retain, nonatomic) CacheDeleteVolume *cdVolume;
@property (retain) NSDate *timestamp;
@property (retain) NSNumber *freespace;
@property unsigned long long reserve;
@property (retain, nonatomic) NSString *bsdDisk;
@property BOOL hasSnapshot;
@property (retain, nonatomic) NSMutableDictionary *services;
@property (nonatomic) long long volumeState;
@property (retain, nonatomic) NSDictionary *thresholds;
@property (retain, nonatomic) NSMutableDictionary *diagnostics;

+ (id)CDRecentVolumeInfo:(id)a0;

- (void)log;
- (id)volumeServices;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (id)createVolumeWithPath:(id)a0;
- (void)removeServiceInfo:(id)a0;
- (BOOL)validateServiceInfo:(id)a0 atUrgency:(int)a1;
- (id)description;
- (unsigned long long)_reserveForVolume;
- (id)initWithServices:(id)a0 volumeName:(id)a1;
- (id)initWithVolumeInfo:(id)a0;
- (id)recentInfoAtUrgency:(int)a0;
- (void).cxx_destruct;
- (BOOL)isStale;
- (id)createVolumeWithMountPoint:(id)a0;
- (id)_recentInfoAtUrgency:(int)a0 validateResults:(BOOL)a1;
- (BOOL)_validateWithSharedCacheDeleteForService:(id)a0;
- (BOOL)updateServiceInfoAmount:(id)a0 forService:(id)a1 atUrgency:(int)a2 withTimestamp:(double)a3 nonPurgeableAmount:(id)a4 deductFromCurrentAmount:(BOOL)a5 info:(id)a6;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyInvalidsAtUrgency:(int)a0 currentlyPushing:(id)a1;
- (BOOL)isEmpty;

@end
