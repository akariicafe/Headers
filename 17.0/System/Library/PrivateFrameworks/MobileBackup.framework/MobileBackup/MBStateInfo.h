@class NSNumber, NSError, NSMutableArray, NSDate;

@interface MBStateInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int state;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) BOOL isCloud;
@property (nonatomic) float progress;
@property (nonatomic) unsigned long long estimatedTimeRemaining;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *errors;
@property (retain, nonatomic) NSNumber *restoredSnapshotBackupPolicy;

- (id)initWithState:(int)a0 progress:(float)a1 estimatedTimeRemaining:(unsigned long long)a2 error:(id)a3 errors:(id)a4;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithState:(int)a0 progress:(float)a1 estimatedTimeRemaining:(unsigned long long)a2 isCloud:(BOOL)a3 isBackground:(BOOL)a4 error:(id)a5 errors:(id)a6;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
