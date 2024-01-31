@class NSUUID, NSString, HMDHome, NSDate;

@interface HMDUserCloudShareRequest : NSObject

@property (readonly) NSUUID *identifier;
@property (readonly) NSDate *startDate;
@property (readonly) NSString *containerID;
@property (readonly, weak) HMDHome *home;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 containerID:(id)a1 home:(id)a2;

@end
