@class NSString, NSDate;

@interface STUIDevice : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) short platform;
@property (readonly, nonatomic) NSDate *lastFamilyCheckinDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 identifier:(id)a1 platform:(short)a2 lastFamilyCheckinDate:(id)a3;

@end
