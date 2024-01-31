@class NSString;

@interface WLQRCode : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *code;

- (void).cxx_destruct;
- (id)createQRCodeImage:(double)a0;
- (id)initWithName:(id)a0 title:(id)a1 URL:(id)a2 code:(id)a3;

@end
