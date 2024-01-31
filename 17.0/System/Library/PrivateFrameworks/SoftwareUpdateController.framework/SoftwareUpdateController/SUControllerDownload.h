@class SUControllerProgress, SUControllerDescriptor;

@interface SUControllerDownload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUControllerDescriptor *descriptor;
@property (retain, nonatomic) SUControllerProgress *progress;

+ (id)downloadWithDescriptor:(id)a0 andProgress:(id)a1;

- (id)initWithDescriptor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
