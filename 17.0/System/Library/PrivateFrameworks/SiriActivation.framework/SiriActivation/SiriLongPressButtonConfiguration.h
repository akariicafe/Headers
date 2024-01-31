@class NSString;

@interface SiriLongPressButtonConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) long long buttonIdentifer;
@property (readonly, nonatomic) double longPressInterval;
@property (nonatomic) long long longPressBehavior;

- (void).cxx_destruct;
- (id)initWithButtonIdentifier:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
