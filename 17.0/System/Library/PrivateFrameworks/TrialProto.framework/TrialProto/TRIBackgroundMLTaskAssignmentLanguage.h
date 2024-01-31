@class NSString, TRIPBUInt32Array, NSMutableArray;

@interface TRIBackgroundMLTaskAssignmentLanguage : TRIPBMessage

@property (retain, nonatomic) TRIPBUInt32Array *bucketArray;
@property (readonly, nonatomic) unsigned long long bucketArray_Count;
@property (retain, nonatomic) NSMutableArray *predicateArray;
@property (readonly, nonatomic) unsigned long long predicateArray_Count;
@property (copy, nonatomic) NSString *factorPackId;
@property (nonatomic) BOOL hasFactorPackId;
@property (copy, nonatomic) NSString *factorPackSetId;
@property (nonatomic) BOOL hasFactorPackSetId;

+ (id)descriptor;

@end
