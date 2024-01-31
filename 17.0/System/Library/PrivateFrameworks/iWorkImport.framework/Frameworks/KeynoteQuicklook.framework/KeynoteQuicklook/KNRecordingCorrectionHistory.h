@interface KNRecordingCorrectionHistory : NSObject <NSCopying>

@property (readonly, nonatomic) KNRecordingCorrectionHistory *correctionHistoryWithAddedMissingEventsForRadar49654305;
@property (readonly, nonatomic) BOOL didAddMissingEventsForRadar49654305;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessage:(const void *)a0 unarchiver:(id)a1;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;

@end
