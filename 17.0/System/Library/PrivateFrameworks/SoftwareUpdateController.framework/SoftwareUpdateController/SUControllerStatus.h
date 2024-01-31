@interface SUControllerStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long managerState;
@property (nonatomic) BOOL failForwardMode;
@property (nonatomic) long long updateState;

- (id)init;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
