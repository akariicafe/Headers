@class NSDate;

@interface BMPublisherOptions : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long maxEvents;
@property (readonly, nonatomic) unsigned long long lastN;
@property (readonly, nonatomic) BOOL reversed;

+ (id)reversed;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 maxEvents:(unsigned long long)a2 lastN:(unsigned long long)a3 reversed:(BOOL)a4;

@end
