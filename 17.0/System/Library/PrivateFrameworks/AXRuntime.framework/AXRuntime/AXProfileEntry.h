@class NSString;

@interface AXProfileEntry : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) struct { unsigned long long elementOrHash; unsigned long long elementID; } uid;
@property (nonatomic) int pid;
@property (nonatomic) long long attribute;
@property (nonatomic) unsigned long long valueSize;
@property (nonatomic) unsigned long long valueHash;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSString *appName;

- (id)description;
- (void).cxx_destruct;

@end
