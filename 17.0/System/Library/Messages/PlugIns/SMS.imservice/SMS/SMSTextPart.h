@class NSString, NSMutableString;

@interface SMSTextPart : NSObject

@property (readonly, retain, nonatomic) NSString *contentLocation;
@property (readonly, retain, nonatomic) NSMutableString *text;

- (void)dealloc;
- (void)appendText:(id)a0;
- (id)initWithContentLocation:(id)a0;

@end
