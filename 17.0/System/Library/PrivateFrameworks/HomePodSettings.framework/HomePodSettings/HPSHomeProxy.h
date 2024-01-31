@class NSString;

@interface HPSHomeProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasValidHomeLoaded;
@property (readonly, copy, nonatomic) NSString *accesoryName;
@property (nonatomic) long long minimumMediaUserPrivilege;
@property (nonatomic) BOOL isMediaPeerToPeerEnabled;
@property (nonatomic) BOOL isAutoSUEnabled;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessoryName:(id)a0 validHome:(BOOL)a1;

@end
