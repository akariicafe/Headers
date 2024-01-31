@class NSString, NSArray;

@interface FTMutableStartBatchRecoverRequest : FTStartBatchRecoverRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *apg_ids;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
