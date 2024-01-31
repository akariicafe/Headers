@class NSString, NSDate;

@interface HTHang : NSObject

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *hangId;
@property (retain, nonatomic) NSDate *createdAt;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSString *processPath;
@property (readonly, nonatomic) long long durationLevel;

- (void).cxx_destruct;

@end
