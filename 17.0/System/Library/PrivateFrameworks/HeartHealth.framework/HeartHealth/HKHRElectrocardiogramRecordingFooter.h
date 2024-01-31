@class NSString;

@interface HKHRElectrocardiogramRecordingFooter : NSObject

@property (readonly, nonatomic) NSString *footerText;
@property (readonly, nonatomic) NSString *footerLink;
@property (readonly, nonatomic) NSString *linkURL;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 link:(id)a1 url:(id)a2;

@end
