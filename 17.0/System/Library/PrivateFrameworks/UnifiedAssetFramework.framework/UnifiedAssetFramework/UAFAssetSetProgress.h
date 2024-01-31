@class NSString, NSMutableDictionary;

@interface UAFAssetSetProgress : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long completed;
@property (nonatomic) unsigned long long total;
@property (nonatomic) unsigned long long maxProgressBeforeComplete;
@property (retain, nonatomic) NSMutableDictionary *progresses;
@property (retain, nonatomic) NSMutableDictionary *statuses;
@property (nonatomic) unsigned long long reportedPercent;
@property (nonatomic) unsigned long long reportedStatus;
@property (copy, nonatomic) id /* block */ progressWithStatus;

+ (id)getSerialQueue;
+ (id)validProgressTypes;

- (void).cxx_destruct;
- (void)summarize;
- (id)initWithName:(id)a0 maxProgressBeforeComplete:(unsigned long long)a1 progressWithStatus:(id /* block */)a2;
- (void)progress:(id)a0 completed:(unsigned long long)a1 total:(unsigned long long)a2 status:(unsigned long long)a3;
- (void)reportPercent:(unsigned long long)a0 status:(unsigned long long)a1;

@end
