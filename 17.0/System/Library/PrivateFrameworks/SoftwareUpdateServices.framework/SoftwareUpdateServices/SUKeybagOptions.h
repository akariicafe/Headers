@class NSString, LAContext, SUDescriptor;

@interface SUKeybagOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *passcode;
@property (retain, nonatomic) LAContext *laContext;
@property (retain, nonatomic) SUDescriptor *descriptor;
@property (nonatomic) int keybagType;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
