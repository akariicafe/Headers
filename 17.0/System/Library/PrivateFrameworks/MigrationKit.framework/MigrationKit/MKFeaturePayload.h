@class NSDecimalNumber, NSString;

@interface MKFeaturePayload : NSObject

@property (nonatomic) BOOL enabled;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long totalElapsedTime;
@property (copy, nonatomic) NSDecimalNumber *importElapsedTime;
@property (copy, nonatomic) NSString *state;

- (id)init;
- (void).cxx_destruct;

@end
