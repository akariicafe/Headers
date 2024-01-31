@class SUControllerProgress, SUControllerDescriptor;

@interface SUControllerApply : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUControllerDescriptor *descriptor;
@property (retain, nonatomic) SUControllerProgress *progress;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
