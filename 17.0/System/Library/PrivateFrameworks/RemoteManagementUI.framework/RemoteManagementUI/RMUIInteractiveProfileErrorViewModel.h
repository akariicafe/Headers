@class NSString, NSError;

@interface RMUIInteractiveProfileErrorViewModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *title;
@property (retain) NSString *message;
@property (retain) NSString *okText;
@property (retain) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0 isActivating:(BOOL)a1;

@end
