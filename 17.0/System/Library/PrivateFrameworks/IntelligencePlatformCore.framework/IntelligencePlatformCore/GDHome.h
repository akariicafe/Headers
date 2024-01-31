@class NSString, NSArray, NSUUID, CLLocation, HMHome;

@interface GDHome : NSObject {
    HMHome *_inner;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *users;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) HMHome *hmHome;
@property (readonly, copy, nonatomic) NSArray *allUsers;

- (void).cxx_destruct;
- (id)persons;
- (id)initWithHMHome:(id)a0;

@end
