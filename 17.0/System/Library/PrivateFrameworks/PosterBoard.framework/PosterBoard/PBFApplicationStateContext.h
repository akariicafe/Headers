@class NSSet, NSString;

@interface PBFApplicationStateContext : NSObject

@property (readonly, copy, nonatomic) NSSet *posterUUIDs;
@property (readonly, copy, nonatomic) NSString *foregroundStateDescription;

+ (id)contextWithForegroundStateDescription:(id)a0 posterUUIDs:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
