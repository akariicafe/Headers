@class NSString, NSDate;

@interface HMDBackgroundTask : HMFObject

@property (readonly, copy, nonatomic) NSDate *expectedFireDate;
@property (readonly, copy, nonatomic) NSDate *scheduledDate;
@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithIdentifier:(id)a0 expectedFireDate:(id)a1 scheduledDate:(id)a2;

@end
