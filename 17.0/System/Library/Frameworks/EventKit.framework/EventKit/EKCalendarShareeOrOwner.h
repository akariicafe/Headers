@class NSString, NSURL;

@interface EKCalendarShareeOrOwner : NSObject <EKCalendarShareeOrOwner>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property (readonly, nonatomic) BOOL isCurrentUserForSharing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareeWithEKSharee:(id)a0 forCalendar:(id)a1;
+ (id)ownerForEKCalendar:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
