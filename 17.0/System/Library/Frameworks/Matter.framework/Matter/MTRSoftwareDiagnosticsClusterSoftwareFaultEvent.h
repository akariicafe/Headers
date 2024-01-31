@class NSNumber, NSString, NSData;

@interface MTRSoftwareDiagnosticsClusterSoftwareFaultEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *id;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *faultRecording;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
