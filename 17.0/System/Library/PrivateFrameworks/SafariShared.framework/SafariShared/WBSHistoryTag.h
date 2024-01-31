@class NSString;

@interface WBSHistoryTag : NSObject

@property (readonly, nonatomic) long long databaseID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double modificationTimestamp;
@property (readonly, nonatomic) long long level;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 identifier:(id)a1 databaseID:(long long)a2 modificationTimestamp:(double)a3 level:(long long)a4;

@end
