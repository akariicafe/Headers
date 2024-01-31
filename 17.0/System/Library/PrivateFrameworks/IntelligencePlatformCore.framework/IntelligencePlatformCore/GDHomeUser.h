@class NSString, NSUUID, HMUser;

@interface GDHomeUser : NSObject {
    HMUser *_inner;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *userID;

- (void).cxx_destruct;
- (id)initWithHMUser:(id)a0;
- (BOOL)isAdministratorForHome:(id)a0;

@end
