@class NSString;

@interface FCManagedResourceConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *resourceID;
@property (readonly, nonatomic) long long refreshRate;

- (id)init;
- (id)initWithResourceID:(id)a0 refreshRate:(long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
