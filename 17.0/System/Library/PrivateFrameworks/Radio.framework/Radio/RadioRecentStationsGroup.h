@class NSString, NSArray;

@interface RadioRecentStationsGroup : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSArray *stations;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithRecentStationsGroupClass:(Class)a0;

@end
