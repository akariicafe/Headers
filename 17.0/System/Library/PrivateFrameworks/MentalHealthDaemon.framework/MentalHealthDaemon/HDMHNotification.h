@class NSString, NSDateComponents;

@interface HDMHNotification : NSObject <NSCopying> {
    long long _fireOnDayIndex;
}

@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, nonatomic) NSDateComponents *dateComponents;

- (id)eventIdentifier;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFireOnDayIndex:(long long)a0 dateComponents:(id)a1 category:(id)a2;

@end
