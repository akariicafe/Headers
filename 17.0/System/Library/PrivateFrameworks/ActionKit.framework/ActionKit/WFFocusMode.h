@class NSString, WFImage;

@interface WFFocusMode : NSObject <NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *colorName;
@property (readonly, nonatomic) WFImage *symbolImage;
@property (readonly, copy, nonatomic) NSString *wfName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFCActivityDescribing:(id)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 symbolName:(id)a2 colorName:(id)a3;

@end
