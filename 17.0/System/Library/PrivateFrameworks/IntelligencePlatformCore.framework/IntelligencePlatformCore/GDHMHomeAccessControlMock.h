@interface GDHMHomeAccessControlMock : NSObject {
    BOOL _isAdminAnswer;
}

@property (readonly, nonatomic, getter=isAdministrator) BOOL administrator;

- (id)initWithIsAdminAnswer:(BOOL)a0;

@end
