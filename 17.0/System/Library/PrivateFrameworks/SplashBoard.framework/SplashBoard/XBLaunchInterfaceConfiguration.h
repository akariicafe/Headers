@class NSString, NSArray;

@interface XBLaunchInterfaceConfiguration : NSObject <BSXPCCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *colorName;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, nonatomic) BOOL imageRespectsSafeAreaInsets;
@property (readonly, nonatomic) NSArray *bars;
@property (readonly, copy, nonatomic) NSString *navigationBarImageName;
@property (readonly, copy, nonatomic) NSString *toolbarImageName;
@property (readonly, copy, nonatomic) NSString *tabBarImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithConfigurationDictionary:(id)a0;

@end
