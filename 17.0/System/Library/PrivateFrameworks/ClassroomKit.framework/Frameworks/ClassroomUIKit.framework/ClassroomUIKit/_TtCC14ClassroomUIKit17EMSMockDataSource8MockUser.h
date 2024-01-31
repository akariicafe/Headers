@class NSString;
@protocol CRKASMNameComponents;

@interface _TtCC14ClassroomUIKit17EMSMockDataSource8MockUser : NSObject <CRKASMUser> {
    void /* unknown type, empty encoding */ mockNameComponents;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, readonly) id<CRKASMNameComponents> nameComponents;
@property (nonatomic) void /* unknown type, empty encoding */ federated;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isFederated;

@end
