@class NSString, NSDate;

@interface SecLaunchEvent : NSObject <NSCopying>

@property (retain) NSString *name;
@property (retain) NSDate *date;
@property unsigned int counter;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
