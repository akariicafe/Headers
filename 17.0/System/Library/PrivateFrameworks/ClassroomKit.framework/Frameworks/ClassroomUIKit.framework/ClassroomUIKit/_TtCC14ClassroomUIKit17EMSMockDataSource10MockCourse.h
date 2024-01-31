@class NSString, NSArray, NSSet, NSDate;
@protocol CRKIdentity;

@interface _TtCC14ClassroomUIKit17EMSMockDataSource10MockCourse : NSObject <CRKASMCourse> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ creationDate;
    void /* unknown type, empty encoding */ users;
    void /* unknown type, empty encoding */ trustedUsers;
    void /* unknown type, empty encoding */ allTrustedUserCertificates;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) void /* unknown type, empty encoding */ mascot;
@property (nonatomic) void /* unknown type, empty encoding */ color;
@property (nonatomic, retain) void /* unknown type, empty encoding */ location;
@property (nonatomic) void /* unknown type, empty encoding */ editable;
@property (nonatomic, readonly) id<CRKIdentity> identity;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSArray *users;
@property (nonatomic, copy) NSArray *trustedUsers;
@property (nonatomic, copy) NSSet *allTrustedUserCertificates;

- (id)init;
- (BOOL)isEditable;
- (void).cxx_destruct;

@end
