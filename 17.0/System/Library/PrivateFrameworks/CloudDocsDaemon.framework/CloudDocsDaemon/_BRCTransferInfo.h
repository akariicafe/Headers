@class BRCProgress, NSMutableDictionary;

@interface _BRCTransferInfo : NSObject

@property (readonly, nonatomic) BRCProgress *progress;
@property (nonatomic) long long sumOfCompletedUnitCountDelta;
@property (nonatomic) long long sumOfTotalUnitCountDelta;
@property (readonly, nonatomic) NSMutableDictionary *versionSizes;
@property (readonly, nonatomic) NSMutableDictionary *childProgresses;
@property (readonly, nonatomic) NSMutableDictionary *previousUnitCounts;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)updateUnitCount;
- (void)copyProgressInfoToProgress:(id)a0 options:(char)a1;
- (void)updateLocalizedDescriptionWithOptions:(char)a0;
- (void)verifyFutureProgressIsNotFinished;

@end
