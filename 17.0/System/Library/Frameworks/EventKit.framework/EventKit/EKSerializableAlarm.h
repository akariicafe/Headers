@class NSNumber, NSDate;

@interface EKSerializableAlarm : EKSerializableObject

@property (retain, nonatomic) NSNumber *relativeOffset;
@property (copy, nonatomic) NSDate *absoluteDate;
@property (nonatomic) BOOL isAbsolute;
@property (nonatomic) BOOL isDefaultAlarm;

+ (id)classesForKey;

- (void).cxx_destruct;
- (id)createAlarm:(id *)a0;
- (id)initWithAlarm:(id)a0;

@end
