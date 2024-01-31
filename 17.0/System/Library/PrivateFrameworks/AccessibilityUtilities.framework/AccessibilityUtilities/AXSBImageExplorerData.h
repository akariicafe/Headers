@class NSString, NSArray;

@interface AXSBImageExplorerData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *hostAppBundleID;
@property (retain, nonatomic) NSString *hostAppName;
@property (retain, nonatomic) NSString *axLabel;
@property (retain, nonatomic) NSArray *customContent;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
